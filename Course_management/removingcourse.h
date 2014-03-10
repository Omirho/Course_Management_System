#pragma once

namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for removingcourse
	/// </summary>
	public ref class removingcourse : public System::Windows::Forms::Form
	{
	public:
		String ^ userid;
		removingcourse(String ^ u)
		{
			InitializeComponent();
			userid=u;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~removingcourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(124, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Miramonte", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(273, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &removingcourse::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select Course";
			// 
			// removingcourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(378, 82);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->MaximizeBox = false;
			this->Name = L"removingcourse";
			this->Text = L"removingcourse";
			this->Load += gcnew System::EventHandler(this, &removingcourse::removingcourse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				  String^ delimStr = ",";
			 String^ k =  comboBox1->Text;
			 array<String^>^ words;
			 array<Char>^ delimiter = delimStr->ToCharArray();
			 words = k->Split(delimiter);
			 String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
			 MySqlConnection^ con=gcnew MySqlConnection(connectstr);
			 MySqlCommand^ cmd = gcnew MySqlCommand("delete from course_management.courses_list where columnname='"+words[0]+"+"+words[1]+"';",con);
		String^ path2 = "c:\\Course_Management_System\\"+words[0]+"+"+words[1];
		  DirectoryInfo^ di1 = gcnew DirectoryInfo( path2 );
		  if ( Directory::Exists( path2 ) )
      {
		  di1->Delete();
		  this->Close();
       return ;
      }
		  //MessageBox::Show("This course doesnot exists","Error!!",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
 this->Close();

			 }
	private: System::Void removingcourse_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				// String^ name= "Movies";
				 //showing courses from the main folder::Course_Management_System
//			 String^ path ="c://Course_Management_System";
//			 array<String^>^ dir = Directory::GetDirectories(path );
//			 for (int i=0; i<dir->Length; i++)
//				//Console::WriteLine(dir[i]);
//			{
//
////				listBox1->Items->Add( String::Format( dir[i], i ) );
//				comboBox1->Items->Add( dir[i] );
//				//comboBox2->Items->Add( dir[i] );
//			}	
			 String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
			 MySqlConnection^ con=gcnew MySqlConnection(connectstr);
			 MySqlDataReader^ reader;
			 MySqlCommand^ cmd = gcnew MySqlCommand("Select course_management.courses_list.name,course_management.courses_list.course_no,course_management.courses_list.year from course_management.courses_list,course_management.registrations where course_management.registrations.userid='"+userid+"' and course_management.courses_list.columnname=course_management.registrations.coursecolumnname;",con);
			 con->Open();
			 reader=cmd->ExecuteReader();
			 while(reader->Read())
			 {
				 comboBox1->Items->Add((reader->GetString(1))+","+(reader->GetString(2)));
				 //comboBox2->Items->Add((reader->GetString(1))+","+(reader->GetString(2)));
			 }
			 con->Close();

			 }
};
}
