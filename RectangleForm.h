#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GeometricObjects {

	/// <summary>
	/// Сводка для RectangleForm
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class RectangleForm : public System::Windows::Forms::Form
	{
	public:
		int koordX, koordY;
		int width, height;
		int view;
	private: System::Windows::Forms::Button^  button1;
	public: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
			 

	public:
		RectangleForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RectangleForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RectangleForm::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(14, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(14, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(14, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RectangleForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &RectangleForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &RectangleForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(112, 89);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &RectangleForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(14, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"label4";
			// 
			// RectangleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(226, 158);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(242, 197);
			this->MinimumSize = System::Drawing::Size(242, 197);
			this->Name = L"RectangleForm";
			this->Text = L"RectangleForm";
			this->Load += gcnew System::EventHandler(this, &RectangleForm::RectangleForm_Load);
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
				 if (str!="" && str!="-")
					 width=Convert::ToInt32(str);
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 String ^str;
				 str = textBox4->Text;
				 if (str!="" && str!="-")
					 height=Convert::ToInt32(str);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void RectangleForm_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (view==0)
			 {
				 label1->Text = "Координата Х";
				 label2->Text = "Координата Y";
				 label3->Text = "Ширина";
				 label4->Text = "Высота";
				 button1->Text = "Нарисовать";
			 }
			 if (view==1)
			 {
				 label1->Text = "Новая коорд. Х";
				 label2->Text = "Новая коорд. Y";
				 label3->Text = "Ширина";
				 textBox3->Enabled = false;
				 label4->Text = "Высота";
				 textBox4->Enabled = false;
				 button1->Text = "Переместить";
			 }
			 if (view==2)
			 {
				 label1->Text="Сместить X на";
				 label2->Text="Сместить Y на";
				 label3->Text = "Ширина";
				 textBox3->Enabled = false;
				 label4->Text = "Высота";
				 textBox4->Enabled = false;
				 button1->Text= "Сместить";
			 }
		 }
};
}
