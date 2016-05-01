#pragma once

#include "THeadList.h"
#include "TStack.h"
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
		int GetX(Graphics ^gr) 
		{return x;}
		int GetY(Graphics ^gr) 
		{return y;}
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


	//----------------------------------------------------------------------------
	class TLine: public TPoint
	{
	protected:
		int x2, y2;
	public:
		TLine (int _x1, int _y1, int _x2, int _y2) : TPoint(_x1,_y1)
		{
			x2=_x2;
			y2=_y2;
		}
		virtual void Draw(Graphics^ gr)
		{
			gr->DrawLine(Pens::Black, x, y, x2, y2);
			Active = true;
			Visible = true;
		}
		virtual void Hide(Graphics^ gr)
		{
			gr->DrawLine(Pens::White, x, y, x2, y2);
			Visible = false;
		}
		virtual void MoveTo(Graphics^ gr, int _x2, int _y2)
		{
			Hide(gr);
			x = _x2;
			y = _y2;
			x2 += (_x2 - x);
			y2 += (_y2 - y);
			Draw(gr);
		}
		virtual void Move(Graphics^ gr, int _x, int _y)
		{
			Hide(gr);
			x += _x;
			y += _y;
			x2 += _x;
			y2 += _y;
			Draw(gr);
		}
	};
	//----------------------------------------------------------------------------
	class TChart;
	struct TChartLine
	{
		TChart *pLine;
		TPoint *pFp, *pLp;
	};
	class TChart : public TObject
	{
	protected:
		TObject *begin, *end;
		Tstack <TChartLine> st;
	public:
		TObject *GetFirst()
		{
			return begin;
		}
		TObject *GetLast()
		{
			return end;
		}
		void SetFirst(TObject *obj)
		{
			begin = obj;
		}
		void SetLast(TObject *obj)
		{
			end = obj;
		}
		TChart (TPoint *point1, TPoint *point2)
		{
			SetFirst(point1);
			SetLast(point2);
		}
		~TChart() {}
		virtual void Draw(Graphics ^gr)
		{
			TPoint *q;
			TObject *t;
			TChartLine CurrLine;
			st.clear();
			CurrLine.pLine = this;
			CurrLine.pFp = NULL;
			CurrLine.pLp = NULL;
			st.Push(CurrLine);
			while (!st.IsEmpty())
			{
				CurrLine = st.Pop();
				while (CurrLine.pFp == NULL)
				{
					t = this->GetFirst();
					q = dynamic_cast <TPoint*> (t);
					if (q!=NULL)
						CurrLine.pFp = q;
					else
					{
						st.Push(CurrLine);
						CurrLine.pLine = dynamic_cast <TChart*> (t);
					}
				}
				if (CurrLine.pLp == NULL)
				{
					t=this->GetLast();
					q = dynamic_cast <TPoint*> (t);
					if (q!=NULL)
						CurrLine.pLp = q;
					else
					{
						st.Push(CurrLine);
						CurrLine.pLine = dynamic_cast <TChart*> (t);
						CurrLine.pFp = NULL;
						st.Push(CurrLine);
					}
				}
				if ((CurrLine.pFp!=NULL) && (CurrLine.pLp!=NULL))
				{
					gr->DrawLine(Pens::Black, CurrLine.pFp->GetX(gr), CurrLine.pFp->GetY(gr), CurrLine.pLp->GetX(gr), CurrLine.pLp->GetY(gr));
					if (!st.IsEmpty())
					{
						q = CurrLine.pLp;
						CurrLine = st.Pop();
						if (CurrLine.pFp == NULL)
							CurrLine.pFp = q;
						else
							CurrLine.pLp = q;
						st.Push(CurrLine);
					}
				}
			}
		}
		virtual void Hide(Graphics ^gr){}
		virtual void MoveTo(Graphics ^gr, int _x, int _y) {}
		virtual void Move(Graphics ^gr, int x, int y) {}
	};
}