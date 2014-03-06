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
	    comboBox1->Items->Add("Faculty");
		comboBox1->Items->Add("Student");
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
		String^ finalpass= textBox5->Text;int f1=0,f2=0,f=0;
		if(String::IsNullOrEmpty(name)||String::IsNullOrEmpty(username)||String::IsNullOrEmpty(usertype)||String::IsNullOrEmpty(pass))
		{
			f=1;
			label4->Show();
			label4->Text="* marked fields are required";
		}
		else if(pass->Length < 8)
		{
			f1=1;
			label4->Show();
			//label4->Text= name;
			label4->Text="passwords should be atleast 8 characters long";
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


			String^ connectstr=L"datasource=localhost;port=3306;username=root;password=project";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
			// MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM users.loginids;",conDataBase);
			//MySqlDataReader^ myReader;
			try
			{
				conDataBase->Open();
				String^ cmdText = "INSERT INTO users.loginids (`S No.`,`userid`,`password`,`type`) VALUES('10','"+username+"','"+pass+"','"+usertype+"');";
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
