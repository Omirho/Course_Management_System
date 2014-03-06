#pragma once

namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminmainform
	/// </summary>
	public ref class adminmainform : public System::Windows::Forms::Form
	{
	public:
		adminmainform(void)
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
		~adminmainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(144, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO ADMIN SECTION ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 24);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ADD A STUDENT";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ADD A COURSE";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"ADD A FACULTY";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 164);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"SEND A NOTIFICATION";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(13, 194);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(188, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"REQUESTS AND NOTIFICATIONS";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 224);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(189, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"STUDENT RECORDS";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &adminmainform::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(13, 254);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(188, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"FACULTY RECORD";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// adminmainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 302);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"adminmainform";
			this->Text = L"adminmainform";
			this->Load += gcnew System::EventHandler(this, &adminmainform::adminmainform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void adminmainform_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
//private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) ;
		 
//private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) ;
		 
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) ;
		 
};
}
