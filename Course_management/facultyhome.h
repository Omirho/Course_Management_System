#pragma once
#include "AppointmentAdder.h"
#include "removeappointment.h"
#include "StudentList.h"
#include "notes.h"
#include "Form1.h"
namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for facultyhome
	/// </summary>
	public ref class facultyhome : public System::Windows::Forms::Form
	{
	public:
		facultyhome(void)
		{
			InitializeComponent();
			timer1 -> Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~facultyhome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button4;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer3;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape5;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer3 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(773, 454);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->monthCalendar1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->shapeContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(765, 425);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Personal";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &facultyhome::tabPage1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(526, 254);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(164, 331);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 27);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Remove Apointment";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &facultyhome::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 27);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add/Edit Apointment";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &facultyhome::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(649, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Schedule an Appointment";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"List of upcoming Events:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(321, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name of faculty";
			this->label2->Click += gcnew System::EventHandler(this, &facultyhome::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(256, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			this->label1->Click += gcnew System::EventHandler(this, &facultyhome::label1_Click);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(3, 3);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(759, 419);
			this->shapeContainer1->TabIndex = 12;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = -8;
			this->lineShape1->X2 = 760;
			this->lineShape1->Y1 = 241;
			this->lineShape1->Y2 = 242;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->shapeContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(765, 425);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Courses";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(221, 325);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 21);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Go";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &facultyhome::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(24, 326);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 16);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Select Course";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(122, 325);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(93, 21);
			this->comboBox2->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(638, 23);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 26);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Remove Course";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(24, 292);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 16);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Post Course Material";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(535, 23);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 26);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Add Course";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(221, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 21);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Go";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &facultyhome::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(23, 178);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 16);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Students in a Course";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(24, 211);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 16);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Select Course";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(122, 210);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(93, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &facultyhome::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(651, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"label6";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(26, 68);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(709, 85);
			this->dataGridView2->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"List of courses";
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(3, 3);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(2) {this->lineShape3, 
				this->lineShape2});
			this->shapeContainer2->Size = System::Drawing::Size(759, 419);
			this->shapeContainer2->TabIndex = 5;
			this->shapeContainer2->TabStop = false;
			// 
			// lineShape3
			// 
			this->lineShape3->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->X1 = -11;
			this->lineShape3->X2 = 757;
			this->lineShape3->Y1 = 260;
			this->lineShape3->Y2 = 261;
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = -3;
			this->lineShape2->X2 = 760;
			this->lineShape2->Y1 = 164;
			this->lineShape2->Y2 = 165;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->comboBox4);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->comboBox3);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->shapeContainer3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(765, 425);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Messages";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 383);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(589, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"Write Reply Here";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(617, 283);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 21);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Go";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(617, 383);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 21);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Go";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(22, 357);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 16);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Select Course";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(120, 356);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(93, 21);
			this->comboBox4->TabIndex = 16;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(19, 336);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(136, 16);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Post Course Updates";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(21, 257);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(122, 16);
			this->label15->TabIndex = 10;
			this->label15->Text = L"Select Message ID";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(149, 256);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(116, 21);
			this->comboBox3->TabIndex = 9;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(32, 221);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 16);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Reply";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 283);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(589, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Write Reply Here";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(32, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 16);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Messages";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(25, 38);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(711, 160);
			this->dataGridView3->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(650, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"label8";
			// 
			// shapeContainer3
			// 
			this->shapeContainer3->Location = System::Drawing::Point(0, 0);
			this->shapeContainer3->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer3->Name = L"shapeContainer3";
			this->shapeContainer3->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(2) {this->lineShape5, 
				this->lineShape4});
			this->shapeContainer3->Size = System::Drawing::Size(765, 425);
			this->shapeContainer3->TabIndex = 8;
			this->shapeContainer3->TabStop = false;
			// 
			// lineShape5
			// 
			this->lineShape5->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape5->Name = L"lineShape5";
			this->lineShape5->X1 = 1;
			this->lineShape5->X2 = 764;
			this->lineShape5->Y1 = 322;
			this->lineShape5->Y2 = 323;
			// 
			// lineShape4
			// 
			this->lineShape4->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->lineShape4->Name = L"lineShape4";
			this->lineShape4->X1 = 1;
			this->lineShape4->X2 = 764;
			this->lineShape4->Y1 = 212;
			this->lineShape4->Y2 = 213;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &facultyhome::timer1_Tick);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(688, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(76, 21);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Logout";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &facultyhome::button9_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(259, 129);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 13;
			// 
			// facultyhome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 457);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->tabControl1);
			this->Name = L"facultyhome";
			this->Text = L"facultyhome";
			this->Load += gcnew System::EventHandler(this, &facultyhome::facultyhome_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			//import name of faculty

			 }
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e)
		 {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 DateTime datetime = DateTime::Now;
			this -> label6-> Text =datetime.ToString();
			this -> label7-> Text =datetime.ToString();
			this -> label8-> Text =datetime.ToString();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  AppointmentAdder^ obj1= gcnew AppointmentAdder;
			 obj1->Show(this);
			 
		 }



private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
		removeappointment^ obj1= gcnew removeappointment;
			 obj1->Show(this);

			 

		 }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		 {

			 //Enter the couses in the drop down menu
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //if(String::Compare(comboBox1->Text,"FACULTY")==0)
			 //{
					StudentList^ obj1= gcnew StudentList;
					obj1->Show(this);
			 
		     //}
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 notes^ obj1= gcnew notes;
			 obj1->Show(this);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //this->close(); 
			 facultyhome::Close();
			//Form1^ obj1= gcnew Form1;
			//Form1::Show();
		}
private: System::Void facultyhome_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
