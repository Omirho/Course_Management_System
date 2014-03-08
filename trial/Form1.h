#pragma once

namespace trial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	protected: 
	public: System::Windows::Forms::TabControl^  tabControl1;
	private: 
	private: System::Windows::Forms::TabPage^  PersonalData;
	public: 
	private: System::Windows::Forms::TabPage^  Courses;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox2;


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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->PersonalData = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Courses = (gcnew System::Windows::Forms::TabPage());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->flowLayoutPanel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->PersonalData->SuspendLayout();
			this->Courses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->tabControl1);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(854, 425);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->PersonalData);
			this->tabControl1->Controls->Add(this->Courses);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(851, 410);
			this->tabControl1->TabIndex = 0;
			// 
			// PersonalData
			// 
			this->PersonalData->Controls->Add(this->label6);
			this->PersonalData->Controls->Add(this->label5);
			this->PersonalData->Controls->Add(this->label4);
			this->PersonalData->Controls->Add(this->label3);
			this->PersonalData->Controls->Add(this->label2);
			this->PersonalData->Controls->Add(this->label1);
			this->PersonalData->Location = System::Drawing::Point(4, 22);
			this->PersonalData->Name = L"PersonalData";
			this->PersonalData->Padding = System::Windows::Forms::Padding(3);
			this->PersonalData->Size = System::Drawing::Size(843, 384);
			this->PersonalData->TabIndex = 0;
			this->PersonalData->Text = L"Personal";
			this->PersonalData->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(387, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(201, 29);
			this->label6->TabIndex = 5;
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(257, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"USERNAME:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(383, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 29);
			this->label4->TabIndex = 3;
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(309, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"NAME:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(331, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Personal Information";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(248, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"COURSE MANAGEMENT SYSTEM";
			// 
			// Courses
			// 
			this->Courses->Controls->Add(this->linkLabel2);
			this->Courses->Controls->Add(this->linkLabel1);
			this->Courses->Controls->Add(this->dataGridView1);
			this->Courses->Controls->Add(this->label7);
			this->Courses->Controls->Add(this->monthCalendar1);
			this->Courses->Location = System::Drawing::Point(4, 22);
			this->Courses->Name = L"Courses";
			this->Courses->Padding = System::Windows::Forms::Padding(3);
			this->Courses->Size = System::Drawing::Size(843, 384);
			this->Courses->TabIndex = 1;
			this->Courses->Text = L"Planner";
			this->Courses->UseVisualStyleBackColor = true;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(242, 234);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(38, 13);
			this->linkLabel2->TabIndex = 4;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Delete";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(200, 234);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(26, 13);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Add";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(366, 82);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(255, 114);
			this->dataGridView1->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(362, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(291, 23);
			this->label7->TabIndex = 1;
			this->label7->Text = L"YOUR PLANS FOR TODAY";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(53, 34);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(843, 384);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Courses";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(204, 23);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(565, 329);
			this->dataGridView2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(36, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(843, 384);
			this->tabPage1->TabIndex = 3;
			this->tabPage1->Text = L"Messages";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(52, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 24);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Messages";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(56, 59);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(741, 201);
			this->dataGridView3->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(53, 275);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(141, 24);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Select Faculty";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(57, 347);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(517, 21);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Type your message here";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(580, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(651, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Logout";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(64, 19);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Select Course";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(57, 313);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 425);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->PersonalData->ResumeLayout(false);
			this->Courses->ResumeLayout(false);
			this->Courses->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //change the name of label4(name) dynamically depending upon the username and password from the data base
			 			 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 //change the name of label6(username) dynamically depending upon the username and password from the data base
		 }
};
}

