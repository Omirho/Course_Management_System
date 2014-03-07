
#include "StdAfx.h"
#include "Form1.h"
#include "addfaculty.h"
#include "adminmainform.h"
#include "signupform.h"
#include "studentrecord.h"
#include "addStudent.h"
#include "sendmessage.h"
#include <iostream>
#include <tchar.h>
#include <string.h>

namespace Course_management
{
	Void adminmainform::button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		studentrecord^ obj= gcnew studentrecord;
		obj->Show(this);
		this->Hide();

	}


	Void adminmainform::button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		sendmessage^ obj=gcnew sendmessage;
		obj->Show(this);
		this->Hide();
	}

	Void adminmainform::button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		addfaculty^ obj=gcnew addfaculty;
		obj->Show(this);
		this->Hide();
	}
}