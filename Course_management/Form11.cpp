//----------form11.cpp is essentially the form which handles the login part of the app----------//
//----------------it connects to a database and checks if the entered use is valid and if the password is correct -------//
//--------------------corressponding form is displayed-------------------------------------------------------------------//

#include "StdAfx.h"
#include "Form1.h"
#include "adminmainform.h"
#include "signupform.h"
#include <iostream>
#include <tchar.h>
#include <string.h>
namespace Course_management
{
	//------------si


	Void Form1::label4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		signupform^ obj=gcnew signupform;
		obj->Show(this);
		this->Hide();
	}
	//-----------when the button is clicked a connection to the database is established and user is verified---------//
	//----------- the schema is users and the table is loginids-----------------------//
	//------------- it has following entries S No.,username,
Void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //------------------ establishing connection to the database-------------------//

			 String^ connectstr=L"datasource=localhost;port=3306;username=root;password=project";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM users.loginids;",conDataBase);
			 MySqlDataReader^ myReader;
			 try
			 {
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();

				 while(myReader->Read())
				 {
					 String^ k=myReader->GetString(1);
					 textBox1->Text=k;
				 }

			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }

//-------------------------------------connection part closed-------------------------

			adminmainform^ obj1= gcnew adminmainform;
			 if(String::Compare(comboBox1->Text,"ADMIN")==0)
			 {
			 obj1->Show(this);
			 this->Hide();
			 }
			 Int32 x=addme(2,3);
			 //obj1->Show(this);
			 //this->Hide();
			//String^ a= System::Convert::ToString(x);
			 //obj1->label1->Text = a;
		 }
int Form1::addme(int a,int b)
{
	int c = a+b;
	return c;
}
}