#include "StdAfx.h"
#include "Form1.h"
#include "addfaculty.h"
#include "adminmainform.h"
#include "signupform.h"
//#include "studentrecords.h"
#include "addStudent.h"
#include <iostream>
#include <tchar.h>
#include <string.h>


namespace Course_management
{
	Void addfaculty::addfaculty_Load(System::Object^ sender, System::EventArgs^ e)
	{
		label1->Text = "ADD A FACULTY";
		label2->Text = "NAME*";
		label3->Text = "USERNAME*";
		label4->Text = "PASSWORD*";
		label5->Text = "DEPARTMENT*";
		label6->Text = "COURSES";
		label7->Hide();
	}

	Void addfaculty::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ name;String^ pass;String^ dept;String^ courses;String^ username;
		name= textBox1->Text;
		username = textBox2->Text;
		pass= textBox3->Text;
		dept = textBox4->Text;
		courses = textBox5 ->Text;

		if(String::IsNullOrEmpty(name)||String::IsNullOrEmpty(username)||String::IsNullOrEmpty(pass)||String::IsNullOrEmpty(dept))
		{
			label7->Show();
			label7 ->Text = "* marked fields are required";
		}
		else if(pass->Length < 8)
		{
			label7->Show();
			//label4->Text= name;
			label7->Text="passwords should be atleast 8 characters long";
		}
		else
		{
			label7->Hide();

			String^ connectstr=L"datasource=localhost;port=3306;username=root;password=project";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);

			try
			{
				conDataBase->Open();
				String^ cmdText = "INSERT INTO users.facultyrecords (`name`,`username`,`password`,`department`,`courses`) VALUES('"+name+"','"+username+"','"+pass+"','"+dept+"','"+courses+"');";
				MySqlCommand^ cmdDataBase=gcnew MySqlCommand(cmdText,conDataBase);
				cmdDataBase->Prepare();
				cmdDataBase->ExecuteNonQuery();
			}
			catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			}

			if(MessageBox::Show("Your request has been sent to the admin for approval \n Do you wish to exit?","FORM CLOSING",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
			else
			{
				this->Hide();
				adminmainform^ obj=gcnew adminmainform;
				obj->Show(this);
			}
		}

	}

}
