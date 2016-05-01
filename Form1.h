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
	/// ������ ��� Form1
	///
	/// ��������! ��� ��������� ����� ����� ������ ���������� ����� ��������
	///          �������� ����� ����� �������� ("Resource File Name") ��� �������� ���������� ������������ �������,
	///          ���������� �� ����� ������� � ����������� .resx, �� ������� ������� ������ �����. � ��������� ������,
	///          ������������ �� ������ ��������� �������� � ���������������
	///          ���������, ��������������� ������ �����.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		static dialog ^F2 = gcnew dialog();
		
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;

	public: 

	public: 
		static CircleDialog ^CircleForm = gcnew CircleDialog();
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem1;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
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
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
		/// <summary>
		/// ���������� ��� ������������ �������.
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->���������ToolStripMenuItem, 
				this->����������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->newToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(425, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->�����ToolStripMenuItem, 
				this->������ToolStripMenuItem, this->�����������ToolStripMenuItem, this->��������ToolStripMenuItem});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->���������ToolStripMenuItem->Text = L"�����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->�����ToolStripMenuItem->Text = L"����������";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->����������ToolStripMenuItem, 
				this->������ToolStripMenuItem1, this->�����������ToolStripMenuItem1, this->��������ToolStripMenuItem});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->������ToolStripMenuItem1->Text = L"������";
			this->������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem1_Click);
			// 
			// �����������ToolStripMenuItem1
			// 
			this->�����������ToolStripMenuItem1->Name = L"�����������ToolStripMenuItem1";
			this->�����������ToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->�����������ToolStripMenuItem1->Text = L"�����������";
			this->�����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::�����������ToolStripMenuItem1_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->�����ToolStripMenuItem1, 
				this->������ToolStripMenuItem2, this->�����������ToolStripMenuItem2, this->��������ToolStripMenuItem1});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			// 
			// �����ToolStripMenuItem1
			// 
			this->�����ToolStripMenuItem1->Name = L"�����ToolStripMenuItem1";
			this->�����ToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->�����ToolStripMenuItem1->Text = L"����������";
			this->�����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::����������ToolStripMenuItem1_Click);
			// 
			// ������ToolStripMenuItem2
			// 
			this->������ToolStripMenuItem2->Name = L"������ToolStripMenuItem2";
			this->������ToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->������ToolStripMenuItem2->Text = L"������";
			this->������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem2_Click);
			// 
			// �����������ToolStripMenuItem2
			// 
			this->�����������ToolStripMenuItem2->Name = L"�����������ToolStripMenuItem2";
			this->�����������ToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->�����������ToolStripMenuItem2->Text = L"�����������";
			this->�����������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::�����������ToolStripMenuItem2_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->����������ToolStripMenuItem1, 
				this->��������������ToolStripMenuItem, this->������������ToolStripMenuItem});
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->newToolStripMenuItem->Text = L"������";
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(176, 22);
			this->����������ToolStripMenuItem1->Text = L"�������� � ������";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::����������ToolStripMenuItem1_Click_1);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->������������ToolStripMenuItem->Text = L"������ ������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem1_Click);
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
	private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 gr=this->CreateGraphics();
				 F2->view = 0;
				 F2->ShowDialog();
				 point = new TPoint(F2->koordX, F2->koordY);
				 if (ActiveGroup)
					 group->AddObject(point);
				 point->Draw(gr);
			 }
	private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 gr=this->CreateGraphics();
				 point->Hide(gr);
			 }
private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 F2->view=1;
			 F2->ShowDialog();
			 point->MoveTo(gr,F2->koordX,F2->koordY);
		 }
private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 F2->view=2;
			 F2->ShowDialog();
			 point->Move(gr, F2->koordX, F2->koordY);
		 }
		 //-------------------------------------------------------------------------------
private: System::Void ����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 CircleForm->view=0;
			 CircleForm->ShowDialog();
			 circle = new TCircle(CircleForm->koordX, CircleForm->koordY, CircleForm->Radius);
			 if (ActiveGroup)
					 group->AddObject(circle);
			 circle->Draw(gr);
		 }
private: System::Void ������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 circle->Hide(gr);
		 }
private: System::Void �����������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 CircleForm->view=1;
			 CircleForm->ShowDialog();
			 circle->MoveTo(gr,CircleForm->koordX, CircleForm->koordY);
		 }
private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 CircleForm->view=2;
			 CircleForm->ShowDialog();
			 //circle->Move(gr, CircleForm->koordX, CircleForm->koordY);
			 for (int i=0; i<100; i++)
				 circle->Move(gr, CircleForm->koordX, CircleForm->koordY);
		 }
		 //-------------------------------------------------------------------------------
private: System::Void ����������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 RF->view=0;
			 RF->ShowDialog();
			 rectangle = new TRectangle(RF->koordX, RF->koordY, RF->width, RF->height);
			 if (ActiveGroup)
					 group->AddObject(rectangle);
			 rectangle->Draw(gr);
		 }
private: System::Void ������ToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 rectangle->Hide(gr);
		 }
private: System::Void �����������ToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 RF->view = 1;
			 RF->ShowDialog();
			 rectangle->MoveTo(gr, RF->koordX, RF->koordY);
		 }
private: System::Void ��������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 RF->view = 2;
			 RF->ShowDialog();
			 rectangle->Move(gr, RF->koordX, RF->koordY);
		 }
		 //-------------------------------------------------------------------------------
private: System::Void ����������ToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ActiveGroup = true;
		 }
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
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
private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 gr=this->CreateGraphics();
			 group->Hide(gr);
		 }
};
}

