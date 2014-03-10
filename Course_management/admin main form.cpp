
#include "StdAfx.h"
#include "Form1.h"
#include "addfaculty.h"
#include "deletethisform.h"
#include "adminmainform.h"
#include "signupform.h"
#include "facultyrecords.h"
#include "studentrecord.h"
#include "addStudent.h"
#include "sendmessage.h"
#include <iostream>
#include <tchar.h>
#include <string.h>

namespace Course_management
{

Void adminmainform::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	facultyrecords^ obj = gcnew facultyrecords;
		obj->ShowDialog(this);
		this->Show();


}
	Void adminmainform::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		addStudent^ obj = gcnew addStudent;
		obj->ShowDialog(this);
		this->Show();
	}


	Void adminmainform::button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		studentrecord^ obj= gcnew studentrecord;
		obj->ShowDialog(this);
		this->Show();

	}


	Void adminmainform::button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Hide();
		sendmessage^ obj=gcnew sendmessage;
		obj->ShowDialog(this);
		this->Show();
	}

	Void adminmainform::button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Hide();
		addfaculty^ obj=gcnew addfaculty;
		obj->ShowDialog(this);
		this->Show();
	}
	
}