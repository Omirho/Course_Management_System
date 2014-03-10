#pragma once

namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentList
	/// </summary>
	public ref class StudentList : public System::Windows::Forms::Form
	{
	public:
		String^ cn;
		StudentList(String^ a)
		{
			InitializeComponent();
			cn=a;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Miramonte", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name of Course";
			this->label1->Click += gcnew System::EventHandler(this, &StudentList::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(652, 169);
			this->dataGridView1->TabIndex = 1;
			// 
			// StudentList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Linen;
			this->ClientSize = System::Drawing::Size(690, 240);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"StudentList";
			this->Text = L"StudentList";
			this->Load += gcnew System::EventHandler(this, &StudentList::StudentList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void StudentList_Load(System::Object^  sender, System::EventArgs^  e) {
				 // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

			try{
			String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
			 MySqlConnection^ con=gcnew MySqlConnection(connectstr);
			 //MySqlDataReader^ reader;
			 auto da1=gcnew MySqlDataAdapter("Select roll_number,name,department from course_management.student_list where `"+cn+"`='1';",con);
			 auto ds1=gcnew DataSet;
			 da1->Fill(ds1,"std");
			 dataGridView1->DataSource=ds1;
			 dataGridView1->DataMember="std";
			 dataGridView1->Refresh();
			}
			catch(Exception^ ex)
			{	MessageBox::Show(ex->Message);}
			 }
	};
}
