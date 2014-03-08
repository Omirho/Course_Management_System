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

		array<Button^ >^ btn1;
		array<Button^ >^ btn2;
		array<TextBox^ >^ txt;
		//array<RadioButton^ >^ radio;
		array<Label^ >^ label;
		int count,price,width;
		String^ name;
		String^ usertype;
		String^ s;
	private: System::Windows::Forms::Label^  label1;
	public: 
		String^ type;


		addStudent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			btn1 = gcnew array<Button^ >(30);
			btn2 = gcnew array<Button^ >(30);
			//radio = gcnew array<RadioButton^ >(30);
			txt = gcnew array<TextBox^ >(30);
			label = gcnew array<Label^ >(30);
			for(int i =0;i<25;i++)
			{
				//radio[i] = gcnew RadioButton;
				txt[i] = gcnew TextBox;
				btn1[i] = gcnew Button;
				btn2[i] = gcnew Button;
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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(35, 39);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(361, 134);
			this->flowLayoutPanel1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(186, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// addStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 262);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"addStudent";
			this->Text = L"addStudent";
			this->Load += gcnew System::EventHandler(this, &addStudent::addStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addStudent_Load(System::Object^  sender, System::EventArgs^  e); /*listBox1->Items->Add("Sally");
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

};
}
