#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GeometricObjects {

	/// <summary>
	/// Сводка для dialog
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class dialog : public System::Windows::Forms::Form
	{
	public:
		int koordX, koordY;
		int view;
	private: System::Windows::Forms::Button^  button1;
	public: 
		dialog(void)
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
		~dialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	protected: 

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"лабел1";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"лабел2";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &dialog::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(114, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &dialog::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Кнопочка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dialog::button1_Click);
			// 
			// dialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(226, 158);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(242, 197);
			this->MinimumSize = System::Drawing::Size(242, 197);
			this->Name = L"dialog";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"PointDialog";
			this->Load += gcnew System::EventHandler(this, &dialog::dialog_Load);
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			Close();
		 }
private: System::Void dialog_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (view==0)
			 {
				 label1->Text = "Координата X";
				 label2->Text = "Координата Y";
				 button1->Text = "Нарисовать";
			 }
			 if (view==1)
			 {
				 label1->Text = "Новая коорд. X";
				 label2->Text = "Новая коорд. Y";
				 button1->Text = "Переместить";
			 }
			 if (view==2)
			 {
				 label1->Text = "Сместить X на";
				 label2->Text = "Сместить Y на";
				 button1->Text = "Сместить";
			 }
		 }
};
}
