//-------------- the following code is written by kushal on 6th March for course management project----------------//
//------------- the piece of code handles the displaying of student records-------------//
#include "StdAfx.h"
#include "studentrecord.h"
#include <iostream>
#include <tchar.h>
#include <string.h>
#include "Form1.h"

namespace Course_management
{
	
	Void studentrecord::studentrecord_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//---------Create a database of students records----------------------//
		//-------------include following fields - Sno.(PK),name ,username,password,rollno.,securityquestion,answer(the last two entries are optional to be added in signup including rollno.)---------
		
		
		//----------create a connetion to the database and display the record in the table form 
		String^ connectstr=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
		MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
		MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT roll_number,name,username,department FROM course_management.student_list;",conDataBase);
		//MySqlDataReader^ myReader;
		try
		{
			//-------- code to load the data in datagrid view fields of the forms design------------//

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset= gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bsource = gcnew BindingSource();

			bsource->DataSource =dbdataset;
			dataGridView1->DataSource = bsource;
			sda->Update(dbdataset);
		}//an exception is thrown if the connection failure or if the entries fail to be loaded in the datagridview //
		catch(Exception^ ex){
			MessageBox::Show(ex->Message);
		}


	}
	Void studentrecord::dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
	{
		//Form1^ obj=gcnew Form1;
		//this->Hide();
		//obj->Show(this);
	}
}
