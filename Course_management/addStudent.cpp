#include "StdAfx.h"
#include "addStudent.h"
#include "signupform.h"
#include <iostream>
#include <tchar.h>
#include <string.h>
#include <string>
#include "Form1.h"
namespace Course_management
{

		Void addStudent::addStudent_Load(System::Object^ sender, System::EventArgs^ e)
		{
			String^ txtboxtxt;
			//String* usrname[] = new String* [30];
			// connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

			String^ connectstr=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM course_management.signuprequests where usertype='Student';",conDataBase);
			MySqlDataReader^ myReader;
			try
			{
				conDataBase->Open();
				myReader=cmdDataBase->ExecuteReader();
				int count=0;
				while(myReader->Read())
				{   count = count+1;
					name=myReader->GetString("Name");
					usrname[count]=myReader->GetString("username");
					txtboxtxt="*"+name +" requested you to add him/her to student record under student privileges";

					 radio1[count]->Name = System::Convert::ToString(count); 
					 radio2[count]->Name = System::Convert::ToString(count);
					  label[count]->Text = txtboxtxt;
					   label[count]->ForeColor = System::Drawing::Color::LightYellow;
					 	label[count]->Font = (gcnew System::Drawing::Font(L"Miramonte", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
					  radio1[count] -> Size =  System::Drawing::Size(100, 23);
					   radio1[count]->Text = "ACCEPT REQUEST";
					   radio2[count] -> Size =  System::Drawing::Size(100, 23);
					   radio2[count]->Text = "REJECT REQUEST";
					   //txt[count]->Text = txtboxtxt;

					   //label[count]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
						  // | System::Windows::Forms::AnchorStyles::Left) 
						  // | System::Windows::Forms::AnchorStyles::Right));
					   int l = txtboxtxt->Length;
					   label[count]->Size = System::Drawing::Size(600, 26);
					//   label[count]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						 //  static_cast<System::Byte>(0)));
					  // label[count]->ForeColor = System::Drawing::Color::Blue;

					  radio1[count]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
					  radio2[count]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));

					    FlowLayoutPanel^ flowLayoutPanel2 = gcnew FlowLayoutPanel;
						flowLayoutPanel2->AutoSize = true;
						flowLayoutPanel2->Controls->Add(label[count]);
						//flowLayoutPanel2->Controls->Add(txt[count]);
						flowLayoutPanel2->Controls->Add(radio1[count]);
						flowLayoutPanel2->Controls->Add(radio2[count]);
						//flowLayoutPanel2->Controls->Add(radio[count]);

						flowLayoutPanel1->Controls->Add(flowLayoutPanel2);
					//	btn1[count]->Click += gcnew System::EventHandler(this, &addStudent::ClickHandler(label[count]->Text));
						
						/*btn1[count]->Click += delegate(object sender, EventArgs args)
						{
							ClickHandler(sender, innere);
						};*/


						//delegate(object sender, EventArgs args)
						//{
						//	ClickHandler(sender, innere);
						//};

				}
			}
				catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				}
		
		/*	btn1[count]->Click = ClickHandler(count);*/
			
		}
	Void addStudent::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//MessageBox::Show("hello");
		int i;
		//int action;
		// connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

		String^ connectstr=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
		MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
		for( i =0 ;i<=count;i++)
		{
			if(radio1[i]->Checked == true)
			{
				String^ uname=usrname[i];
				MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from course_management.signuprequests where username='"+uname+"';",conDataBase);
				//MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("insert into users.studentrecord where usertype='student';",conDataBase);
				MySqlDataReader^ myReader;
				try
					{
							conDataBase->Open();
							myReader=cmdDataBase->ExecuteReader();
							while (myReader->Read())
							{
							String^	nme=myReader->GetString(1);
							uname = myReader->GetString(2);
							String^ pss=myReader->GetString(3);
							String ^ rll = myReader->GetString(5);
							String^ cmdText1 = "INSERT INTO course_management.student_list (`name`,`username`,`password`,`roll_number`) VALUES('"+nme+"','"+uname+"','"+pss+"','"+rll+"');";
							MySqlCommand^ cmdDataBase1=gcnew MySqlCommand(cmdText1,conDataBase);
							cmdDataBase1->Prepare();
							cmdDataBase1->ExecuteNonQuery();
						}
						MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("delete from course_management.signuprequests where username='"+uname+"';",conDataBase);
						cmdDataBase2->Prepare();
						cmdDataBase2->ExecuteNonQuery();
	
				}
			catch(Exception^ ex)
				{
					MessageBox::Show(ex->ToString());
				}


		}
		else if(radio2[i]->Checked== true)
			{
				// connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

				try{
				String^ uname=usrname[i];
				MessageBox::Show(uname);
				String^ connectstr=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
				MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
				MySqlCommand^ cmdDataBase=gcnew MySqlCommand("delete from course_management.signuprequests where username='"+uname+"';",conDataBase);
				//MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("insert into users.studentrecord where usertype='student';",conDataBase);
				//MySqlDataReader^ myReader;
				conDataBase->Open();
				cmdDataBase->Prepare();
				cmdDataBase->ExecuteNonQuery();
				}
				catch(Exception^ ex)
				{					MessageBox::Show(ex->Message);}
			}
		}
		this->Close();
	//	name = label[i]->Text;
	//String^ connectstr1=L"datasource=localhost;port=3306;username=root;password=course;database=course_management";
	//MySqlConnection^ conDataBase1=gcnew MySqlConnection(connectstr);
	// MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM users.loginids;",conDataBase);
	//MySqlDataReader^ myReader;
	//try
	//{
		/*conDataBase1->Open();
		String^ cmdText1 = "INSERT INTO users.loginids (`SNo.`,`Name`,`username`,`password`,`usertype`,`securityquestion`,`securityans`,`RollNo.`) VALUES('"+key+"','"+name+"','"+username+"','"+pass+"','"+usertype+"','"+securityques+"','"+ans+"','"+r+"');";
		MySqlCommand^ cmdDataBase1=gcnew MySqlCommand(cmdText,conDataBase);
		cmdDataBase1->Prepare();
		cmdDataBase1->ExecuteNonQuery();*/
	//}
	//catch(Exception^ ex){
	//	MessageBox::Show(ex->Message);
	//}
		}
	}