#pragma once

namespace Course_management {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addStudent
	/// </summary>
	public ref class addStudent : public System::Windows::Forms::Form
	{
	public:
		addStudent(void)
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
		~addStudent()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listviewitem;
	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::ColumnHeader^  MESSAGE;
	private: System::Windows::Forms::ColumnHeader^  APPROVE;
	private: System::Windows::Forms::ColumnHeader^  DECLINE;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->MESSAGE = (gcnew System::Windows::Forms::ColumnHeader());
			this->APPROVE = (gcnew System::Windows::Forms::ColumnHeader());
			this->DECLINE = (gcnew System::Windows::Forms::ColumnHeader());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->MESSAGE, this->APPROVE, 
				this->DECLINE});
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) {listViewItem1});
			this->listView1->Location = System::Drawing::Point(23, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(255, 238);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// MESSAGE
			// 
			this->MESSAGE->Text = L"MESSAGE";
			this->MESSAGE->Width = 138;
			// 
			// APPROVE
			// 
			this->APPROVE->Text = L"APPROVE";
			// 
			// DECLINE
			// 
			this->DECLINE->Text = L"DECLINE";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(314, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &addStudent::dataGridView1_CellContentClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(373, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(583, 28);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(60, 193);
			this->flowLayoutPanel1->TabIndex = 6;
			// 
			// addStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 262);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->listView1);
			this->Name = L"addStudent";
			this->Text = L"addStudent";
			this->Load += gcnew System::EventHandler(this, &addStudent::addStudent_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addStudent_Load(System::Object^  sender, System::EventArgs^  e) {/*listBox1->Items->Add("Sally");
			 listBox1->Items->Add("Craig");*/


				 /* for(Int32 i=0;i<5;i++)
				 {
				 Label^ NewLabel = gcnew Label();
				 NewLabel->Name ="Label"+ Convert->ToString(i);
				 NewLabel->Text = "Label" +Convert->ToString(i);
				 this-->Controls->Add(NewLabel);
				 }*/
				//
				// int i;
				// while (i<=2)
				// { 
				//	 Button^ btn = gcnew Button;
				//	 btn->Location =System::Drawing::Point(200,400);String^ abc="my name is kushal";
				// listviewitem =gcnew System::Windows::Forms::ListViewItem(abc);
				// listviewitem->SubItems->Add(abc);
				// //listviewitem->SubItems->Add();
				// this->listView1->Items->Add(this->listviewitem);
				// Label^ newlabel=gcnew Label;
				// newlabel->Text="approve";

				//// flowLayoutPanel1->Controls->Add(btn);
				// i=i+1;
				// }
				
			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }

};
}
