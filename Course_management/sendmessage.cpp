//******************************the following code is for sign up form **************************************
//-------------------the code is written by kushal Sriavstava for Course management Project-------------------
//************************

#include "StdAfx.h"
#include "signupform.h"
#include "adminmainform.h"
#include "sendmessage.h"
#include <iostream>
#include <tchar.h>
#include <string.h>
#include <string>
#include "Form1.h"
namespace Course_management
{
	Void sendmessage::sendmessage_Load(System::Object^ sender, System::EventArgs^ e)
	{
		label1->Text = "TO*";
		label2->Text = "Subject";
		label3->Text = "Message Body";
		label4->Hide();
	}
	Void sendmessage::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ to= textBox1->Text;
		String^ sub= textBox2->Text;
		String^ msg= textBox3->Text;

		int key =1;

		// connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

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
				int use=myReader->GetInt32(0);
			/*	if(String::Compare(use,username)==0)
					f=1;*/
				key=use+1;
			}

		}
		catch(Exception^ ex){
			MessageBox::Show(ex->Message);
		}







		if(String::IsNullOrEmpty(msg))
		{
			label4->Show();
			label4->Text ="Message Body cannot be empty";
		}
		else if(String::IsNullOrEmpty(to))
		{
			label4->Show();
			label4->Text = "enter the recipient field*";
		}
		else
		{

			label4->Hide();

			//-------------store the results in a table holding approval requests------------------//
			//---------- the table holds following fields----------//
			//----------SNo.(primary key),from(name),username,usertype,password,status-----------//
			// connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

			DateTime now = DateTime::Now;
			String^ connectstr=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
			// MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM users.loginids;",conDataBase);
			//MySqlDataReader^ myReader;
			try
			{
				conDataBase->Open();
				String^ cmdText = "INSERT INTO course_management.messages (`from`,`to`,`time`,`description`) VALUES('admin','"+to+"','"+now.ToString("yyyy-MM-dd HH:mm:ss")+"','"+msg+"');";
				MySqlCommand^ cmdDataBase=gcnew MySqlCommand(cmdText,conDataBase);
				cmdDataBase->Prepare();
				cmdDataBase->ExecuteNonQuery();
			}
			catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			}

			//--------------- asks the user for the course of action to be taken -----------------------//

			if(MessageBox::Show("Your message has been sent \n Click yes to go to main page","FORM CLOSING",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
			{
				this->Hide();
				adminmainform^ obj=gcnew adminmainform;
				obj->Show(this);
				
			}
			else
			{
				Application::Exit();
			}
		}

	}

}
