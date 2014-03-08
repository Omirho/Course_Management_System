
#include "StdAfx.h"
#include "Form1.h"
#include "addfaculty.h"
#include "deletethisform.h"
#include "adminmainform.h"
#include "signupform.h"
//#include "studentrecords.h"
#include "studentrecord.h"
#include "addStudent.h"
#include "sendmessage.h"
#include <iostream>
#include <tchar.h>
#include <string.h>

namespace Course_management
{

	Void adminmainform::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		addStudent^ obj = gcnew addStudent;
		obj->Show(this);
		//this->Hide();
	}


	Void adminmainform::button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		studentrecord^ obj= gcnew studentrecord;
		obj->Show(this);
		//this->Hide();

	}


	Void adminmainform::button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		sendmessage^ obj=gcnew sendmessage;
		obj->Show(this);
		//this->Hide();
	}

	Void adminmainform::button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		addfaculty^ obj=gcnew addfaculty;
		obj->Show(this);
		//this->Hide();
	}
	Void adminmainform::button5_Click(System::Object^ sender, System::EventArgs^ e)
	{

		deletethisform^ obj = gcnew deletethisform;
		obj->Show(this);
		//this->Hide();
	}
}