#pragma once
#include "addentry.h"
#include "deleteentry.h"
namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for studentform
	/// </summary>
	public ref class studentform : public System::Windows::Forms::Form
	{
	public:
		/*studentform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}*/
		String^ userid;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	public: 
		System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox1;
	public: 
		String^ name;
		studentform(String^ n,String^ u)
		{
			InitializeComponent();
			name=n;
			userid=u;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentform()
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

	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;


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
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::Label^  label11;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(studentform::typeid));
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->PersonalData->SuspendLayout();
			this->Courses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->tabControl1);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(850, 414);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->PersonalData);
			this->tabControl1->Controls->Add(this->Courses);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(851, 410);
			this->tabControl1->TabIndex = 0;
			// 
			// PersonalData
			// 
			this->PersonalData->BackColor = System::Drawing::Color::LightYellow;
			this->PersonalData->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PersonalData.BackgroundImage")));
			this->PersonalData->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PersonalData->Controls->Add(this->label6);
			this->PersonalData->Controls->Add(this->label5);
			this->PersonalData->Controls->Add(this->label4);
			this->PersonalData->Controls->Add(this->label3);
			this->PersonalData->Controls->Add(this->label2);
			this->PersonalData->Controls->Add(this->label1);
			this->PersonalData->Location = System::Drawing::Point(4, 27);
			this->PersonalData->Name = L"PersonalData";
			this->PersonalData->Padding = System::Windows::Forms::Padding(3);
			this->PersonalData->Size = System::Drawing::Size(843, 379);
			this->PersonalData->TabIndex = 0;
			this->PersonalData->Text = L"Personal";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Olive;
			this->label6->Location = System::Drawing::Point(387, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 29);
			this->label6->TabIndex = 5;
			this->label6->Click += gcnew System::EventHandler(this, &studentform::label6_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Olive;
			this->label5->Location = System::Drawing::Point(257, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"USERNAME:";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Olive;
			this->label4->Location = System::Drawing::Point(383, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 29);
			this->label4->TabIndex = 3;
			this->label4->Click += gcnew System::EventHandler(this, &studentform::label4_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Olive;
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
			this->label2->Location = System::Drawing::Point(257, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Personal Information";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(196, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(386, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"COURSE MANAGEMENT SYSTEM";
			// 
			// Courses
			// 
			this->Courses->BackColor = System::Drawing::Color::LightYellow;
			this->Courses->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Courses.BackgroundImage")));
			this->Courses->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Courses->Controls->Add(this->linkLabel2);
			this->Courses->Controls->Add(this->linkLabel1);
			this->Courses->Controls->Add(this->dataGridView1);
			this->Courses->Controls->Add(this->label7);
			this->Courses->Controls->Add(this->monthCalendar1);
			this->Courses->Location = System::Drawing::Point(4, 27);
			this->Courses->Name = L"Courses";
			this->Courses->Padding = System::Windows::Forms::Padding(3);
			this->Courses->Size = System::Drawing::Size(843, 379);
			this->Courses->TabIndex = 1;
			this->Courses->Text = L"Planner";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(116, 183);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(56, 18);
			this->linkLabel2->TabIndex = 4;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Delete";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &studentform::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(74, 183);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(36, 18);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Add";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &studentform::linkLabel1_LinkClicked);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(281, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(255, 114);
			this->dataGridView1->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(277, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(291, 23);
			this->label7->TabIndex = 1;
			this->label7->Text = L"YOUR PLANS FOR TODAY";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(9, 12);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::LightYellow;
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->listBox1);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(843, 379);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Courses";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(36, 80);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(440, 274);
			this->listBox1->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(294, 8);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Load Material";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &studentform::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Olive;
			this->label10->Location = System::Drawing::Point(33, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 18);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Select Course";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(154, 8);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LightYellow;
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(843, 379);
			this->tabPage1->TabIndex = 3;
			this->tabPage1->Text = L"Messages";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(154, 275);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(579, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &studentform::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(56, 309);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(517, 21);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Type your message here";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Olive;
			this->label9->Location = System::Drawing::Point(41, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 18);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Select User";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(6, 41);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(513, 231);
			this->dataGridView3->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Olive;
			this->label8->Location = System::Drawing::Point(52, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 18);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Messages";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LightYellow;
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tabPage2->ForeColor = System::Drawing::Color::Olive;
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(843, 379);
			this->tabPage2->TabIndex = 4;
			this->tabPage2->Text = L"Register for Course";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(183, 276);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Register";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &studentform::button3_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(52, 276);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 26);
			this->comboBox3->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Olive;
			this->label12->Location = System::Drawing::Point(52, 254);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 18);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Select Course";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(52, 65);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->Size = System::Drawing::Size(474, 186);
			this->dataGridView4->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Olive;
			this->label11->Location = System::Drawing::Point(48, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(143, 18);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Courses Available";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(785, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Logout";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &studentform::button2_Click);
			// 
			// studentform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 414);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"studentform";
			this->Text = L"studentform";
			this->Load += gcnew System::EventHandler(this, &studentform::studentform_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->PersonalData->ResumeLayout(false);
			this->Courses->ResumeLayout(false);
			this->Courses->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //change the name of label4(name) dynamically depending upon the username and password from the data base
			 			 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 //change the name of label6(username) dynamically depending upon the username and password from the data base
		 }
	private: System::Void studentform_Load(System::Object^  sender, System::EventArgs^  e) {
				 // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

				 try{
				 label4->Text=name;
				 label6->Text=userid;
				 String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
			 MySqlConnection^ con=gcnew MySqlConnection(connectstr);
			 MySqlDataReader^ reader;
			 auto da1=gcnew MySqlDataAdapter("Select date,text from course_management.calendar where user=\'"+userid+"\';",con);
			 auto ds1=gcnew DataSet;
			 da1->Fill(ds1,"std");
			 dataGridView1->DataSource=ds1;
			 dataGridView1->DataMember="std";
			 dataGridView1->Refresh();
			 /*auto da2=gcnew MySqlDataAdapter("Select course_management.courses_list.name,course_management.courses_list.course_no,course_management.courses_list.year from course_management.courses_list,course_management.registrations where course_management.registrations.userid='"+userid+"' and course_management.courses_list.columnname=course_management.registrations.coursecolumnname;",con);
			 auto ds2=gcnew DataSet;
			 da2->Fill(ds2,"std");
			 dataGridView2->DataSource=ds2;
			 dataGridView2->DataMember="std";
			 dataGridView2->Refresh();*/
			 auto da3=gcnew MySqlDataAdapter("Select `from`,`to`,time,description from course_management.messages where `to`='all' or `to`='"+userid+"';",con);
			 auto ds3=gcnew DataSet;
			 da3->Fill(ds3,"std");
			 dataGridView3->DataSource=ds3;
			 dataGridView3->DataMember="std";
			 dataGridView3->Refresh();
			 // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

			 auto da4=gcnew MySqlDataAdapter("Select `name`,`department`,course_no,year from course_management.courses_list;",con);
			 auto ds4=gcnew DataSet;
			 da4->Fill(ds4,"std");
			 dataGridView4->DataSource=ds4;
			 dataGridView4->DataMember="std";
			 dataGridView4->Refresh();
			 MySqlCommand^ cmd = gcnew MySqlCommand("Select course_no,year from course_management.courses_list;",con);
			 con->Open();
			 reader=cmd->ExecuteReader();
			 while(reader->Read())
			 {
				 comboBox3->Items->Add((reader->GetString(0))+","+(reader->GetString(1)));
				 //comboBox1->Items->Add(reader->GetString(2));
			 }
			 con->Close();
			 MySqlCommand^ cmd1 = gcnew MySqlCommand("Select course_management.courses_list.name,course_management.courses_list.course_no,course_management.courses_list.year from course_management.courses_list,course_management.registrations where course_management.registrations.userid='"+userid+"' and course_management.courses_list.columnname=course_management.registrations.coursecolumnname;",con);
			 con->Open();
			 reader=cmd1->ExecuteReader();
			 while(reader->Read())
			 {
				 comboBox1->Items->Add((reader->GetString(1))+","+(reader->GetString(2)));
				 /*comboBox2->Items->Add((reader->GetString(1))+","+(reader->GetString(2)));
				 comboBox4->Items->Add((reader->GetString(1))+","+(reader->GetString(2)));*/
			 }
			 con->Close();
			 MySqlCommand^ cmd4 = gcnew MySqlCommand("Select username from course_management.student_list;",con);
			 con->Open();
			 reader=cmd4->ExecuteReader();
			 while(reader->Read())
			 {
				 comboBox2->Items->Add(reader->GetString(0));
			 }
			 con->Close();
			 MySqlCommand^ cmd2 = gcnew MySqlCommand("Select username from course_management.faculty_list;",con);
			 con->Open();
			 reader=cmd2->ExecuteReader();
			 while(reader->Read())
			 {
				 comboBox2->Items->Add(reader->GetString(0));
			 }
			 con->Close();
			 MySqlCommand^ cmd3 = gcnew MySqlCommand("Select username from course_management.admin_list;",con);
			 con->Open();
			 reader=cmd3->ExecuteReader();
			 while(reader->Read())
			 {
				 comboBox2->Items->Add(reader->GetString(0));
			 }
			 con->Close();
			 }
			 catch(Exception^ ex)
			 {					MessageBox::Show(ex->Message);}
			 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 addentry^ obj = gcnew addentry(userid);
			 obj->Show();
		 }
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			  deleteentry^ obj = gcnew deleteentry(userid);
			 obj->Show();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 try{
			 String^ delimStr = ",";
			 String^ k =  comboBox1->Text;
			 array<String^>^ words;
			 array<Char>^ delimiter = delimStr->ToCharArray();
			 words = k->Split(delimiter);
			 String^ path= "c://Course_Management_System" +"//"+ words[0] + "+" + words[1]  ;
			 array<String^>^ dir = Directory::GetFiles(path );
			 for (int i=0; i<dir->Length; i++)
			{
				listBox1->Items->Add( String::Format( dir[i], i ) );
				
			}	
			 }
			 catch(Exception^ ex)
			 {	MessageBox::Show(ex->Message);}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 studentform::Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once

			 try{
			 DateTime now=DateTime::Now;
			 String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
			 MySqlConnection^ con=gcnew MySqlConnection(connectstr);
			 MySqlCommand^ cmd=gcnew MySqlCommand("INSERT INTO course_management.messages (`from`, `to`, `description`, `time`) VALUES ('"+userid+"', '"+comboBox2->Text+"', '"+textBox1->Text+"', '"+now.ToString("yyyy-MM-dd HH:mm:ss")+"');",con);
			 con->Open();
			 cmd->ExecuteNonQuery();
			 con->Close();
			 }
			 catch(Exception^ ex)
			 {			 MessageBox::Show(ex->Message);}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 // connectstr - string to connect to sql server
// MySqlConnection - establishes connection
// MySqlCommand - query to run on the sql server
// ExecuteNonQuery - execute query on server
// MySqlReader - reads data returned by query line by line
// MySqlDataAdapter - reads all the data returned by query at once
			 try{
				 String^ delimStr = ",";
			 String^ k =  comboBox3->Text;
			 array<String^>^ words;
			 array<Char>^ delimiter = delimStr->ToCharArray();
			 words = k->Split(delimiter);
			 String^ connectstr="server=localhost;port=3306;username=root;password=course;database=course_management";
			 MySqlConnection^ con=gcnew MySqlConnection(connectstr);
			 MySqlCommand^ cmd=gcnew MySqlCommand("UPDATE `course_management`.`student_list` SET `"+words[0]+"+"+words[1]+"`='1' WHERE `username`='"+userid+"';",con);
			 con->Open();
			 cmd->ExecuteNonQuery();
			 con->Close();
			 }
			 catch(Exception^ ex)
			 {			 MessageBox::Show(ex->Message);}
		 }
};
}
