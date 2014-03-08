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
			String^ connectstr=L"datasource=localhost;port=3306;username=root;password=project";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM users.signuprequests where usertype='student';",conDataBase);
			MySqlDataReader^ myReader;
			try
			{
				conDataBase->Open();
				myReader=cmdDataBase->ExecuteReader();
				int count=0;
				while(myReader->Read())
				{   count = count+1;
					name=myReader->GetString("name");
					txtboxtxt="*"+name +" requested you to add him/her to student record under student previleges";

					 btn1[count]->Name = System::Convert::ToString(count); 
					 btn2[count]->Name = System::Convert::ToString(count);
					  label[count]->Text = txtboxtxt;
					  btn1[count] -> Size =  System::Drawing::Size(100, 23);
					   btn1[count]->Text = "ACCEPT REQUEST";
					   btn2[count] -> Size =  System::Drawing::Size(100, 23);
					   btn2[count]->Text = "REJECT REQUEST";
					   //txt[count]->Text = txtboxtxt;

					   //label[count]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
						  // | System::Windows::Forms::AnchorStyles::Left) 
						  // | System::Windows::Forms::AnchorStyles::Right));
					   int l = txtboxtxt->Length;
					   label[count]->Size = System::Drawing::Size(600, 26);
					   label[count]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						   static_cast<System::Byte>(0)));
					   label[count]->ForeColor = System::Drawing::Color::Blue;

					  btn1[count]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
					  btn2[count]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));

					    FlowLayoutPanel^ flowLayoutPanel2 = gcnew FlowLayoutPanel;
						flowLayoutPanel2->AutoSize = true;
						flowLayoutPanel2->Controls->Add(label[count]);
						//flowLayoutPanel2->Controls->Add(txt[count]);
						flowLayoutPanel2->Controls->Add(btn1[count]);
						flowLayoutPanel2->Controls->Add(btn2[count]);
						//flowLayoutPanel2->Controls->Add(radio[count]);

						flowLayoutPanel1->Controls->Add(flowLayoutPanel2);


						btn1[count]->Click += gcnew System::EventHandler(this, &addStudent::btn1[count]_click);

				}
			}
			catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			}


			
		}
		Void addStudent::btn1[count]_click()




	}
	
