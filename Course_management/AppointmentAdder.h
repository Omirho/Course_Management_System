#pragma once

namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AppointmentAdder
	/// </summary>
	public ref class AppointmentAdder : public System::Windows::Forms::Form
	{
	public:
		String^ userid;
		AppointmentAdder(String^ u)
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
		~AppointmentAdder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AppointmentAdder::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(97, 38);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(186, 20);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->Value = System::DateTime(2014, 3, 7, 16, 22, 4, 0);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightYellow;
			this->label1->Location = System::Drawing::Point(4, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Select Date";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(35, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Enter Comments Here";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(97, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Shedule Appointment";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AppointmentAdder::button1_Click);
			// 
			// AppointmentAdder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(291, 163);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"AppointmentAdder";
			this->Text = L"AppointmentAdder";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 // save the contents of textbox and date to database
				 // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

				 try{
				String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
				MySqlConnection^ con=gcnew MySqlConnection(connectstr);
				String^ text=textBox1->Text;
				MySqlCommand^ cc = gcnew MySqlCommand("select user from course_management.calendar where `date`='"+dateTimePicker1->Value.ToString("yyyy-MM-dd")+"' and user='"+userid+"';",con);
				MySqlDataReader^ reader;
				con->Open();
				int count=0;
				reader=cc->ExecuteReader();
				while(reader->Read())
				{
					count=count+1;
				}
				con->Close();
				if(count>0)
					MessageBox::Show("Entry already exists..!");
				else
				{
					con->Open();
					MySqlCommand^ cmd=gcnew MySqlCommand("INSERT INTO course_management.calendar (`user`, `date`, `text`) VALUES ('"+userid+"', '"+dateTimePicker1->Value.ToString("yyyy-MM-dd")+"', '"+text+"');",con);
					cmd->ExecuteNonQuery();
					this->Close();
				}
				 }
				 catch(Exception^ ex)
				 {
					MessageBox::Show(ex->Message);
				 }

			 }
};
}
