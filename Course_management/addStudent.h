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

		/*array<Button^ >^ btn1;
		array<Button^ >^ btn2;*/
		array<String ^>^ usrname ;
		array<TextBox^ >^ txt;
		array<RadioButton^ >^ radio1;
		array<RadioButton^ >^ radio2;
		array<Label^ >^ label;
		int count,price,width;
		String^ name;
		String^ usertype;
		String^ s;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	public: 
		String^ type;


		addStudent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//int j;
			//this->btn1[j]->Click += gcnew System::EventHandler(this->ClickHandler);


		//	btn1 = gcnew array<Button^ >(30);
			//btn2 = gcnew array<Button^ >(30);
			radio1 = gcnew array<RadioButton^ >(30);
			radio2 = gcnew array<RadioButton^ >(30);
			txt = gcnew array<TextBox^ >(30);
			label = gcnew array<Label^ >(30);
			usrname = gcnew array<String ^>(30);
			for(int i =0;i<25;i++)
			{
				//radio[i] = gcnew RadioButton;
				txt[i] = gcnew TextBox;
				radio1[i] = gcnew RadioButton;
				radio2[i] = gcnew RadioButton;
				label[i] = gcnew Label;
			}
			name = "";
			//company = "";
		//	price = 0,width=0;
			usertype = "";
			s="";
			type = "";

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(addStudent::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(35, 39);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(499, 231);
			this->flowLayoutPanel1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Teal;
			this->button1->Location = System::Drawing::Point(234, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"DONE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &addStudent::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Miramonte", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label1->Location = System::Drawing::Point(186, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 19);
			this->label1->TabIndex = 7;
			this->label1->Text = L"PENDING REQUESTS";
			// 
			// addStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(560, 360);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->MaximizeBox = false;
			this->Name = L"addStudent";
			this->Text = L"addStudent";
			this->Load += gcnew System::EventHandler(this, &addStudent::addStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addStudent_Load(System::Object^  sender, System::EventArgs^  e); 
			// public: System::Void ClickHandler(int n);
				 /*listBox1->Items->Add("Sally");
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
				
			 
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) ;
		 
};
}
