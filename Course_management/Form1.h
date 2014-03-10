#pragma once
#include "Form2.h"
#include "facultyhome.h"
#include "studentform.h"
#include "signupform.h"
#include "adminmainform.h"
namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
			 //	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	protected: 


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(432, 227);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(432, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"LOG IN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(336, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"UserName";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(338, 292);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"PassWord";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(429, 254);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(429, 288);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(136, 26);
			this->textBox2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(651, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 21);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Sign Up";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(808, 110);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lavender;
			this->label1->Location = System::Drawing::Point(341, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"SYSTEM";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lavender;
			this->label5->Location = System::Drawing::Point(246, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(307, 24);
			this->label5->TabIndex = 9;
			this->label5->Text = L"COURSE MANAGEMENT ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(810, 458);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 comboBox1->Items->Add("ADMIN");
				 comboBox1->Items->Add("STUDENT");
				 comboBox1->Items->Add("FACULTY");
				 String^ path = "c:\\Course_Management_System";
   try
   {

      // Determine whether the directory exists. 
      if ( Directory::Exists( path ) )
      {
		 //MessageBox::Show("This course already exists","Error!!",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);

       return ;
      }

      // Try to create the directory.
      DirectoryInfo^ di = Directory::CreateDirectory( path );
      //Console::WriteLine( "The directory was created successfully at {0}.", Directory::GetCreationTime( path ) );

      
   }
   catch ( Exception^ e ) 
   {
      Console::WriteLine( "The process failed: {0}", e );
   } 	
				 
			 }
	

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			 }
	
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
	{this->Hide();
		signupform^ obj=gcnew signupform;
		obj->ShowDialog(this);
		this->Show();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

			 String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
			 MySqlConnection^ con=gcnew MySqlConnection(connectstr);
			 MySqlDataReader^ reader;
			 String^ userid=textBox1->Text;
			 String^ pass=textBox2->Text;
			 if(String::Compare(comboBox1->Text,"ADMIN")==0)
			 { 
				 //MessageBox::Show("SELECT name FROM course_management.admin_list WHERE username=\'"+userid+"\' and password=\'"+pass+"\';");
				 MySqlCommand^ cmd=gcnew MySqlCommand("SELECT name FROM course_management.admin_list WHERE username=\'"+userid+"\' and password=\'"+pass+"\';",con);
				 try
				 {
					 con->Open();
					 reader=cmd->ExecuteReader();
					 int count=0;
					 while(reader->Read())
						 count++;
					 //MessageBox::Show("Here1");
					 if(count==1)
					{
						//MessageBox::Show(reader->GetString(0));
							this->Hide();
						adminmainform^ obj1= gcnew adminmainform;
						obj1->ShowDialog(this);
						this->Show();
					 }
					 else
						 MessageBox::Show("Invalid Username or Password");
				}
				catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
				 }
			 }
			if(String::Compare(comboBox1->Text,"FACULTY")==0)
			{
				// connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

				 MySqlCommand^ cmd=gcnew MySqlCommand("SELECT name FROM course_management.faculty_list WHERE username=\'"+userid+"\' and password=\'"+pass+"\';",con);
				 try
				 {
					 con->Open();
					 reader=cmd->ExecuteReader();
					 int count=0;
					 while(reader->Read())
						 count++;
					 //MessageBox::Show("Here1");
					 if(count==1)
					{
						String^ n=reader->GetString(0);
							this->Hide();
						facultyhome^ obj1= gcnew facultyhome(n,userid);
						obj1->ShowDialog(this);
						this->Show();
					 }
					 else
						 MessageBox::Show("Invalid Username or Password");
				}
				catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
				 }
			}
			if(String::Compare(comboBox1->Text,"STUDENT")==0)
			{
				// connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

				MySqlCommand^ cmd=gcnew MySqlCommand("SELECT name FROM course_management.student_list WHERE username=\'"+userid+"\' and password=\'"+pass+"\';",con);
				 try
				 {
					 con->Open();
					 reader=cmd->ExecuteReader();
					 int count=0;
					 while(reader->Read())
						 count++;
					 //MessageBox::Show("Here1");
					 if(count==1)
					{
						//MessageBox::Show(reader->GetString(0));
						/*facultyhome^ obj1= gcnew facultyhome;
						obj1->Show(this);
						this->Hide();*/
						String^ n=reader->GetString(0);
							this->Hide();
						studentform^ obj1= gcnew studentform(n,userid);
						obj1->ShowDialog(this);
						this->Show();
						//MessageBox::Show("Correct");
					 }
					 else
						 MessageBox::Show("Invalid Username or Password");
				}
				catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
				 }
			}
		 }
};
}

