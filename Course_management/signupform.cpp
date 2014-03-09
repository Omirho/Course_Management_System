//******************************the following code is for sign up form **************************************
//-------------------the code is written by kushal Sriavstava for Course management Project-------------------
//************************

#include "StdAfx.h"
#include "signupform.h"
#include <iostream>
#include <tchar.h>
#include <string.h>
#include <string>
#include "Form1.h"
namespace Course_management
{
	Void signupform::signupform_Load(System::Object^ sender, System::EventArgs^ e)
	{
		label2->Text="Name*";
		label3->Text="Username(webmail username)  *";
		label6->Text="Password*";
		label5->Text="Confirm Password*";
		label7->Text="Account Type*";
		label8->Text="Roll Number";
		label9->Text="Select Security Question?*";
		label10->Text="Security answer*";
	    comboBox1->Items->Add("Faculty");
		comboBox1->Items->Add("Student");
		comboBox2->Items->Add("what is the name of your first pet?");
		comboBox2->Items->Add("what is the name of your first crush in IITG?");
		comboBox2->Items->Add("what is the your mothers maiden name?");
		comboBox2->Items->Add("what is the name of your first school?");
		label4->Hide();
	}
	Void connect2database(String^ dbase)
	{

	}
	Void signupform::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ name= textBox1->Text;
		String^ usertype= comboBox1->Text;
		String^ username= textBox2->Text;
		String^ pass=textBox4->Text;
		String^ securityques=comboBox2->Text;
		String^ ans=textBox6->Text;
		String^ r=textBox3->Text;
		//int roll=int::Parse(r);
		String^ finalpass= textBox5->Text;int f1=0,f2=0,f=0;int key =1;


		String^ connectstr=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
		MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
	    MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM course_management.signuprequests;",conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			conDataBase->Open();
			myReader=cmdDataBase->ExecuteReader();

			while(myReader->Read())
			{
				String^ use=myReader->GetString(2);
				if(String::Compare(use,username)==0)
					f=1;
				key=key+1;
			}

		}
		catch(Exception^ ex){
			MessageBox::Show(ex->Message);
		}





		if(f==1)
		{
			label4->Show();
			label4->Text="Username already exists,try another one";
		}
		else if(String::IsNullOrEmpty(ans)||String::IsNullOrEmpty(securityques)||String::IsNullOrEmpty(name)||String::IsNullOrEmpty(username)||String::IsNullOrEmpty(usertype)||String::IsNullOrEmpty(pass))
		{
			
			label4->Show();
			label4->Text="* marked fields are required";
		}
		else if(pass->Length < 6)
		{
			f1=1;
			label4->Show();
			//label4->Text= name;
			label4->Text="passwords should be atleast 6 characters long";
		}
		else if(String::Compare(pass,finalpass)!=0)
		{f2=1;
			label4->Show();
			label4->Text="passwords do not match";
		}
		else
		{
			label4->Hide();

			//-------------store the results in a table holding approval requests------------------//
			//---------- the table holds following fields----------//
			//----------SNo.(primary key),from(name),username,usertype,password,status-----------//


			String^ connectstr=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
			// MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM users.loginids;",conDataBase);
			//MySqlDataReader^ myReader;
			try
			{
				conDataBase->Open();
				//String^ cmdText = "INSERT INTO users.signuprequests (`SNo.`,`Name`,`username`,`password`,`usertype`,`securityquestion`,`securityans`,`RollNo.`) VALUES('"+key+"','"+name+"','"+username+"','"+pass+"','"+usertype+"','"+securityques+"','"+ans+"','"+r+"');";
				String^ cmdText = "INSERT INTO users.signuprequests (`SNo.`,`Name`,`username`,`password`,`usertype`,`RollNo.`) VALUES('"+key+"','"+name+"','"+username+"','"+pass+"','"+usertype+"','"+r+"');";
				MySqlCommand^ cmdDataBase=gcnew MySqlCommand(cmdText,conDataBase);
				cmdDataBase->Prepare();
				cmdDataBase->ExecuteNonQuery();
			}
			catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			}

			//--------------- asks the user for the course of action to be taken -----------------------//

			if(MessageBox::Show("Your request has been sent to the admin for approval \n Do you wish to exit?","FORM CLOSING",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
			else
			{
				this->Hide();
				Form1^ obj=gcnew Form1;
				obj->Show(this);
			}
			
		
	}



}
}
