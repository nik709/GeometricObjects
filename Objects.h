#pragma once

#include "THeadList.h"
namespace GeometricObjects 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//----------------------------------------------------------------------------
	class TObject
	{
	protected:
		bool Visible;
		bool Active;
	public:
		virtual void Draw(Graphics ^gr)=0;
		virtual void Hide(Graphics ^gr)=0;
		virtual void MoveTo(Graphics ^gr, int _x, int _y)=0;
		virtual void Move(Graphics ^gr, int x, int y)=0;
		bool IsVisible()
		{
			return Visible;
		}
	};
	//----------------------------------------------------------------------------
	class TPoint: public TObject
	{
	protected:
		int x;
		int y;
	public:
		TPoint(int _x, int _y)
		{
			x=_x;
			y=_y;
		}
		virtual void Draw(Graphics ^gr)
		{
			SolidBrush^ blackBrush = gcnew SolidBrush(Color::Black);
			gr->FillEllipse(blackBrush, x-1, y-1, 3,3);
			Visible = true;
		}
		virtual void Hide(Graphics ^gr)
		{			
			SolidBrush^ blackBrush = gcnew SolidBrush(Color::White);
			gr->FillEllipse(blackBrush, x-1, y-1, 3,3);
			Visible = false;
		}
		virtual void MoveTo(Graphics ^gr, int _x, int _y)
		{
			Hide(gr);
			x=_x;
			y=_y;
			Draw(gr);
		}
		virtual void Move(Graphics ^gr, int _x, int _y)
		{
			Hide(gr);
			x+=_x;
			y+=_y;
			Draw(gr);
		}
	};

	//----------------------------------------------------------------------------
	class TCircle: public TPoint
	{
	protected:
		int R;
	public:
		TCircle(int _x, int _y, int _R): TPoint(_x, _y)
		{
			R=_R;
		}
		virtual void Draw(Graphics ^gr)
		{
			SolidBrush^ blackBrush = gcnew SolidBrush(Color::Black);
			gr->FillEllipse(blackBrush, x-R, y-R, R*2, R*2);
			Visible = true;
		}
		virtual void Hide(Graphics ^gr)
		{
			SolidBrush^ blackBrush = gcnew SolidBrush(Color::White);
			gr->FillEllipse(blackBrush, x-R, y-R, R*2, R*2);
			Visible = false;
		}
		virtual void MoveTo(Graphics ^gr, int _x, int _y)
		{
			Hide(gr);
			x=_x;
			y=_y;
			Draw(gr);
		}
		virtual void Move(Graphics ^gr, int _x, int _y)
		{
			Hide(gr);
			x+=_x;
			y+=_y;
			Draw(gr);
		}
	};

	//----------------------------------------------------------------------------
	class TRectangle: public TPoint
	{
	protected:
		int width;
		int height;
	public:
		TRectangle(int _x, int _y,int _width, int _height) : TPoint(_x,_y)
		{
			width=_width;
			height=_height;
		}
		virtual void Draw(Graphics ^gr)
		{
			gr->DrawRectangle(Pens::Black, x,y,width, height);
			Visible = true;
		}
		virtual void Hide(Graphics ^gr)
		{
			gr->DrawRectangle(Pens::White, x,y,width, height);
			Visible = false;
		}
		virtual void MoveTo(Graphics ^gr, int _x, int _y)
		{
			Hide(gr);
			x=_x;
			y=_y;
			Draw(gr);
		}
		virtual void Move(Graphics ^gr, int _x, int _y)
		{
			Hide(gr);
			x+=_x;
			y+=_y;
			Draw(gr);
		}
	};

	//----------------------------------------------------------------------------
	class TGroup: public TObject
	{
	protected:
		THeadList<TObject*> list;
	public:
		virtual void Draw (Graphics ^gr)
		{
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				list.GetCurrentVal()->Draw(gr);
			}
		}
		virtual void Hide (Graphics ^gr)
		{
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				list.GetCurrentVal()->Hide(gr);
			}
		}
		virtual void MoveTo(Graphics ^gr, int _x, int _y)
		{
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				list.GetCurrentVal()->MoveTo(gr, _x, _y);
			}
		}
		virtual void Move(Graphics ^gr, int _x, int _y)
		{
			for (list.Reset(); !list.IsEnd(); list.GoNext())
			{
				list.GetCurrentVal()->Move(gr, _x, _y);
			}
		}
		void AddObject(TObject *object)
		{
			list.InsLast(object);
		}
	};
}