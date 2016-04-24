#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GeometricObjects {

	/// <summary>
	/// ������ ��� CircleDialog
	///
	/// ��������! ��� ��������� ����� ����� ������ ���������� ����� ��������
	///          �������� ����� ����� �������� ("Resource File Name") ��� �������� ���������� ������������ �������,
	///          ���������� �� ����� ������� � ����������� .resx, �� ������� ������� ������ �����. � ��������� ������,
	///          ������������ �� ������ ��������� �������� � ���������������
	///          ���������, ��������������� ������ �����.
	/// </summary>
	public ref class CircleDialog : public System::Windows::Forms::Form
	{
	public:
		int koordX, koordY, Radius;
		int view;
		CircleDialog(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CircleDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	protected: 

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CircleDialog::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(9, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(9, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CircleDialog::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(114, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &CircleDialog::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(114, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &CircleDialog::textBox3_TextChanged);
			// 
			// CircleDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(226, 158);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(242, 197);
			this->MinimumSize = System::Drawing::Size(242, 197);
			this->Name = L"CircleDialog";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"CircleDialog";
			this->Load += gcnew System::EventHandler(this, &CircleDialog::CircleDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 String ^str;
				 str = textBox1->Text;
				 if (str!="" && str!="-")
					 koordX=Convert::ToInt32(str);
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 String ^str;
			 str = textBox2->Text;
			 if (str!="" && str!="-")
				 koordY=Convert::ToInt32(str);
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 String ^str;
			 str = textBox3->Text;
			 if (str!="")
				 Radius=Convert::ToInt32(str);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void CircleDialog_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (view==0)
			 {
				 label1->Text="���������� X";
				 label2->Text="���������� Y";
				 label3->Text="������";
				 textBox3->Enabled=true;
				 button1->Text="����������";
			 }
			 if (view==1)
			 {
				 label1->Text="����� �����. X";
				 label2->Text="����� �����. Y";
				 textBox3->Enabled=false;
				 button1->Text="�����������";
			 }
			 if (view==2)
			 {
				 label1->Text="�������� X ��";
				 label2->Text="�������� Y ��";
				 textBox3->Enabled=false;
				 button1->Text="��������";
			 }
		 }
};
}
