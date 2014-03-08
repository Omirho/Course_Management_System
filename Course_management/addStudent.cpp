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
					usrname[count]=myReader->GetString("username");
					txtboxtxt="*"+name +" requested you to add him/her to student record under student previleges";

					 radio1[count]->Name = System::Convert::ToString(count); 
					 radio2[count]->Name = System::Convert::ToString(count);
					  label[count]->Text = txtboxtxt;
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
					   label[count]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						   static_cast<System::Byte>(0)));
					   label[count]->ForeColor = System::Drawing::Color::Blue;

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
		int i;
		int action;
		for( i =0 ;i<=count;i++)
		{
			if(radio1[i]->Checked == true)
			{action=1;
				break;}
			else if(radio2[i]->Checked== true)
			{
				action=0;break;
			}
		}
		name = label[i]->Text;
		String^ uname=usrname[i];
	

	String^ connectstr=L"datasource=localhost;port=3306;username=root;password=project";
	MySqlConnection^ conDataBase=gcnew MySqlConnection(connectstr);
	MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from users.signuprequests where username='"+uname+"' ",conDataBase);
	//MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("insert into users.studentrecord where usertype='student';",conDataBase);
	MySqlDataReader^ myReader;
	try
		{
			conDataBase->Open();
			myReader=cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
			String^	nme=myReader->GetString("name");
				uname = myReader->GetString("username");
				String^ pss=myReader->GetString("password");
				String^ secques= myReader->GetString("securityquestion");
				String^ secans= myReader->GetString("securityans");
				String ^ rll = myReader->GetString("RollNo.");
			}

		}
	catch(Exception^ ex)
		{
			MessageBox::Show(ex->ToString());
		}


	String^ connectstr1=L"datasource=localhost;port=3306;username=root;password=project";
	MySqlConnection^ conDataBase1=gcnew MySqlConnection(connectstr);
	// MySqlCommand^ cmdDataBase=gcnew MySqlCommand("SELECT * FROM users.loginids;",conDataBase);
	//MySqlDataReader^ myReader;
	try
	{
		/*conDataBase1->Open();
		String^ cmdText1 = "INSERT INTO users.loginids (`SNo.`,`Name`,`username`,`password`,`usertype`,`securityquestion`,`securityans`,`RollNo.`) VALUES('"+key+"','"+name+"','"+username+"','"+pass+"','"+usertype+"','"+securityques+"','"+ans+"','"+r+"');";
		MySqlCommand^ cmdDataBase1=gcnew MySqlCommand(cmdText,conDataBase);
		cmdDataBase1->Prepare();
		cmdDataBase1->ExecuteNonQuery();*/
	}
	catch(Exception^ ex){
		MessageBox::Show(ex->Message);
	}
		}
	}