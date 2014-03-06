
#include "StdAfx.h"
#include "Form1.h"
#include "adminmainform.h"
#include "signupform.h"
#include "studentrecord.h"
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
}