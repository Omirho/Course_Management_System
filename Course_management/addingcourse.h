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
	/// Summary for addingcourse
	/// </summary>
	public ref class addingcourse : public System::Windows::Forms::Form
	{
	public:
		String^ userid;

		addingcourse(String^ u)
		{
			InitializeComponent();
			//
			userid =u;
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addingcourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(addingcourse::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightYellow;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightYellow;
			this->label2->Location = System::Drawing::Point(13, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Course Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightYellow;
			this->label3->Location = System::Drawing::Point(13, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Year";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(148, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(148, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(148, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(139, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Olive;
			this->button1->Location = System::Drawing::Point(95, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 26);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addingcourse::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(148, 101);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightYellow;
			this->label4->Location = System::Drawing::Point(13, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Department";
			// 
			// addingcourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(310, 173);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"addingcourse";
			this->Text = L"addingcourse";
			this->Load += gcnew System::EventHandler(this, &addingcourse::addingcourse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				String^ path = "c:\\Course_Management_System" +textBox2->Text + "+"  + textBox3->Text;
   try
   {

      // Determine whether the directory exists. 
      if ( Directory::Exists( path ) )
      {
		 MessageBox::Show("This course already exists","Error!!",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);

       return ;
      }

	  // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

      // Try to create the directory.
      DirectoryInfo^ di = Directory::CreateDirectory( path );
	   String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
	  MySqlConnection^ con=gcnew MySqlConnection(connectstr);
	  MySqlCommand^ cmd=gcnew MySqlCommand("INSERT INTO course_management.courses_list (`name`, `course_no`, `year`, `columnname`, `department`) VALUES ('"+textBox1->Text+"', '"+textBox2->Text+"', '"+textBox3->Text+"', '"+textBox2->Text+"+"+textBox3->Text+"', '"+textBox4->Text+"');",con);
	  MySqlCommand^ cmd1=gcnew MySqlCommand("INSERT INTO course_management.registrations (`userid`, `coursecolumnname`) VALUES ('"+userid+"', '"+textBox2->Text+"+"+textBox3->Text+"');",con);
	  MySqlCommand^ cmd2=gcnew MySqlCommand("ALTER TABLE `course_management`.`student_list` ADD COLUMN `"+textBox2->Text+"+"+textBox3->Text+"` VARCHAR(90) NOT NULL DEFAULT 0 AFTER `department`;",con);
	  con->Open();
	  cmd->ExecuteNonQuery();
	  cmd1->ExecuteNonQuery();
	  cmd2->ExecuteNonQuery();
	  this->Close();

      //Console::WriteLine( "The directory was created successfully at {0}.", Directory::GetCreationTime( path ) );

      // Delete the directory.
      //di->Delete();
      //Console::WriteLine( "The directory was deleted successfully." );
   }
   catch ( Exception^ e ) 
   {
      Console::WriteLine( "The process failed: {0}", e );
   } 	 
	this->Close();
			 }
private: System::Void addingcourse_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
