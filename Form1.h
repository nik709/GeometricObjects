#pragma once

#include "Objects.h"
#include "dialog.h"
#include "CircleDialog.h"
#include "RectangleForm.h"

namespace GeometricObjects {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		static dialog ^F2 = gcnew dialog();
		
	private: System::Windows::Forms::ToolStripMenuItem^  окружностьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  нарисоватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  скрытьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  переместитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  сместитьToolStripMenuItem;

	public: 

	public: 
		static CircleDialog ^CircleForm = gcnew CircleDialog();
	private: System::Windows::Forms::ToolStripMenuItem^  прямоугольникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  нарисToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сместитьГруппуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  скрытьГруппуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  скрытьToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  переместитьToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  сместитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  нарисоватьToolStripMenuItem1;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		int xBegin, yBegin;
		int xEnd, yEnd;
		Graphics ^gr;
		static TObject *point = new TPoint(0,0);
		static TObject *circle = new TCircle(0,0,0);
		static TObject *rectangle = new TRectangle(0,0,0,0);
		static TGroup *group = new TGroup();
		static RectangleForm ^RF = gcnew RectangleForm();
		static bool ActiveGroup = false;
	private: System::Windows::Forms::ToolStripMenuItem^  отрисовкаToolStripMenuItem;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  точкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  скрытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  переместитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сдвинутьToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->отрисовкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->точкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переместитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сдвинутьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->окружностьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->нарисоватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переместитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сместитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->прямоугольникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->нарисToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переместитьToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->нарисоватьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сместитьГруппуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьГруппуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сместитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->отрисовкаToolStripMenuItem, 
				this->окружностьToolStripMenuItem, this->прямоугольникToolStripMenuItem, this->newToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(425, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// отрисовкаToolStripMenuItem
			// 
			this->отрисовкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->точкаToolStripMenuItem, 
				this->скрытьToolStripMenuItem, this->переместитьToolStripMenuItem, this->сдвинутьToolStripMenuItem});
			this->отрисовкаToolStripMenuItem->Name = L"отрисовкаToolStripMenuItem";
			this->отрисовкаToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->отрисовкаToolStripMenuItem->Text = L"Точка";
			// 
			// точкаToolStripMenuItem
			// 
			this->точкаToolStripMenuItem->Name = L"точкаToolStripMenuItem";
			this->точкаToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->точкаToolStripMenuItem->Text = L"Нарисовать";
			this->точкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::точкаToolStripMenuItem_Click);
			// 
			// скрытьToolStripMenuItem
			// 
			this->скрытьToolStripMenuItem->Name = L"скрытьToolStripMenuItem";
			this->скрытьToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->скрытьToolStripMenuItem->Text = L"Скрыть";
			this->скрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::скрытьToolStripMenuItem_Click);
			// 
			// переместитьToolStripMenuItem
			// 
			this->переместитьToolStripMenuItem->Name = L"переместитьToolStripMenuItem";
			this->переместитьToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->переместитьToolStripMenuItem->Text = L"Переместить";
			this->переместитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::переместитьToolStripMenuItem_Click);
			// 
			// сдвинутьToolStripMenuItem
			// 
			this->сдвинутьToolStripMenuItem->Name = L"сдвинутьToolStripMenuItem";
			this->сдвинутьToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->сдвинутьToolStripMenuItem->Text = L"Сместить";
			this->сдвинутьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сдвинутьToolStripMenuItem_Click);
			// 
			// окружностьToolStripMenuItem
			// 
			this->окружностьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->нарисоватьToolStripMenuItem, 
				this->скрытьToolStripMenuItem1, this->переместитьToolStripMenuItem1, this->сместитьToolStripMenuItem});
			this->окружностьToolStripMenuItem->Name = L"окружностьToolStripMenuItem";
			this->окружностьToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->окружностьToolStripMenuItem->Text = L"Окружность";
			// 
			// нарисоватьToolStripMenuItem
			// 
			this->нарисоватьToolStripMenuItem->Name = L"нарисоватьToolStripMenuItem";
			this->нарисоватьToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->нарисоватьToolStripMenuItem->Text = L"Нарисовать";
			this->нарисоватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::нарисоватьToolStripMenuItem_Click);
			// 
			// скрытьToolStripMenuItem1
			// 
			this->скрытьToolStripMenuItem1->Name = L"скрытьToolStripMenuItem1";
			this->скрытьToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->скрытьToolStripMenuItem1->Text = L"Скрыть";
			this->скрытьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::скрытьToolStripMenuItem1_Click);
			// 
			// переместитьToolStripMenuItem1
			// 
			this->переместитьToolStripMenuItem1->Name = L"переместитьToolStripMenuItem1";
			this->переместитьToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->переместитьToolStripMenuItem1->Text = L"Переместить";
			this->переместитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::переместитьToolStripMenuItem1_Click);
			// 
			// сместитьToolStripMenuItem
			// 
			this->сместитьToolStripMenuItem->Name = L"сместитьToolStripMenuItem";
			this->сместитьToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->сместитьToolStripMenuItem->Text = L"Сместить";
			this->сместитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сместитьToolStripMenuItem_Click);
			// 
			// прямоугольникToolStripMenuItem
			// 
			this->прямоугольникToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->нарисToolStripMenuItem1, 
				this->скрытьToolStripMenuItem2, this->переместитьToolStripMenuItem2, this->сместитьToolStripMenuItem1});
			this->прямоугольникToolStripMenuItem->Name = L"прямоугольникToolStripMenuItem";
			this->прямоугольникToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->прямоугольникToolStripMenuItem->Text = L"Прямоугольник";
			// 
			// нарисToolStripMenuItem1
			// 
			this->нарисToolStripMenuItem1->Name = L"нарисToolStripMenuItem1";
			this->нарисToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->нарисToolStripMenuItem1->Text = L"Нарисовать";
			this->нарисToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::нарисоватьToolStripMenuItem1_Click);
			// 
			// скрытьToolStripMenuItem2
			// 
			this->скрытьToolStripMenuItem2->Name = L"скрытьToolStripMenuItem2";
			this->скрытьToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->скрытьToolStripMenuItem2->Text = L"Скрыть";
			this->скрытьToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::скрытьToolStripMenuItem2_Click);
			// 
			// переместитьToolStripMenuItem2
			// 
			this->переместитьToolStripMenuItem2->Name = L"переместитьToolStripMenuItem2";
			this->переместитьToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->переместитьToolStripMenuItem2->Text = L"Переместить";
			this->переместитьToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::переместитьToolStripMenuItem2_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->нарисоватьToolStripMenuItem1, 
				this->сместитьГруппуToolStripMenuItem, this->скрытьГруппуToolStripMenuItem});
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->newToolStripMenuItem->Text = L"Группа";
			// 
			// нарисоватьToolStripMenuItem1
			// 
			this->нарисоватьToolStripMenuItem1->Name = L"нарисоватьToolStripMenuItem1";
			this->нарисоватьToolStripMenuItem1->Size = System::Drawing::Size(176, 22);
			this->нарисоватьToolStripMenuItem1->Text = L"Добавить в группу";
			this->нарисоватьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::нарисоватьToolStripMenuItem1_Click_1);
			// 
			// сместитьГруппуToolStripMenuItem
			// 
			this->сместитьГруппуToolStripMenuItem->Name = L"сместитьГруппуToolStripMenuItem";
			this->сместитьГруппуToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->сместитьГруппуToolStripMenuItem->Text = L"Сместить группу";
			this->сместитьГруппуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сместитьГруппуToolStripMenuItem_Click);
			// 
			// скрытьГруппуToolStripMenuItem
			// 
			this->скрытьГруппуToolStripMenuItem->Name = L"скрытьГруппуToolStripMenuItem";
			this->скрытьГруппуToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->скрытьГруппуToolStripMenuItem->Text = L"Скрыть группу";
			this->скрытьГруппуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::скрытьГруппуToolStripMenuItem_Click);
			// 
			// сместитьToolStripMenuItem1
			// 
			this->сместитьToolStripMenuItem1->Name = L"сместитьToolStripMenuItem1";
			this->сместитьToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->сместитьToolStripMenuItem1->Text = L"Сместить";
			this->сместитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::сместитьToolStripMenuItem1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(425, 370);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Geometric Objects";
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//-------------------------------------------------------------------------------
	private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 xBegin=e->X;
				 yBegin=e->Y;
			 }
	private: System::Void Form1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 xEnd=e->X;
				 yEnd=e->Y;
				 gr=this->CreateGraphics();
				 gr->DrawLine(Pens::Black, xBegin,yBegin,xEnd,yEnd);
			 }
	private: System::Void точкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 gr=this->CreateGraphics();
				 F2->view = 0;
				 F2->ShowDialog();
				 point = new TPoint(F2->koordX, F2->koordY);
				 if (ActiveGroup)
					 group->AddObject(point);
				 point->Draw(gr);
			 }
	private: System::Void скрытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 gr=this->CreateGraphics();
				 point->Hide(gr);
			 }
private: System::Void переместитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 F2->view=1;
			 F2->ShowDialog();
			 point->MoveTo(gr,F2->koordX,F2->koordY);
		 }
private: System::Void сдвинутьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 F2->view=2;
			 F2->ShowDialog();
			 point->Move(gr, F2->koordX, F2->koordY);
		 }
		 //-------------------------------------------------------------------------------
private: System::Void нарисоватьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 CircleForm->view=0;
			 CircleForm->ShowDialog();
			 circle = new TCircle(CircleForm->koordX, CircleForm->koordY, CircleForm->Radius);
			 if (ActiveGroup)
					 group->AddObject(circle);
			 circle->Draw(gr);
		 }
private: System::Void скрытьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 circle->Hide(gr);
		 }
private: System::Void переместитьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 CircleForm->view=1;
			 CircleForm->ShowDialog();
			 circle->MoveTo(gr,CircleForm->koordX, CircleForm->koordY);
		 }
private: System::Void сместитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 CircleForm->view=2;
			 CircleForm->ShowDialog();
			 //circle->Move(gr, CircleForm->koordX, CircleForm->koordY);
			 for (int i=0; i<100; i++)
				 circle->Move(gr, CircleForm->koordX, CircleForm->koordY);
		 }
		 //-------------------------------------------------------------------------------
private: System::Void нарисоватьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 RF->view=0;
			 RF->ShowDialog();
			 rectangle = new TRectangle(RF->koordX, RF->koordY, RF->width, RF->height);
			 if (ActiveGroup)
					 group->AddObject(rectangle);
			 rectangle->Draw(gr);
		 }
private: System::Void скрытьToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 rectangle->Hide(gr);
		 }
private: System::Void переместитьToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 RF->view = 1;
			 RF->ShowDialog();
			 rectangle->MoveTo(gr, RF->koordX, RF->koordY);
		 }
private: System::Void сместитьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 RF->view = 2;
			 RF->ShowDialog();
			 rectangle->Move(gr, RF->koordX, RF->koordY);
		 }
		 //-------------------------------------------------------------------------------
private: System::Void нарисоватьToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ActiveGroup = true;
		 }
private: System::Void сместитьГруппуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 for (int i=0; i<100; i++)
				group->Move(gr,1,0);
		 }
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 gr = this->CreateGraphics();
			 if (e->KeyCode == Keys::Down)
				 group->Move(gr, 0,1);
			 if (e->KeyCode == Keys::Right)
				 group->Move(gr,1,0);
		 }
private: System::Void скрытьГруппуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 group->Hide(gr);
		 }
};
}

