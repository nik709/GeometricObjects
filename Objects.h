#pragma once

#include "THeadList.h"
#include "TStack.h"
#include <cmath>
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
	public:
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
	public:
		int x;
		int y;
	public:
		TPoint(int _x=0, int _y=0)
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

		int GetX() {return x;}
		int GetY() {return y;}
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
	class TLine : public TPoint
	{
	public:
		int x2, y2;
	public:
		TLine(int _x=0, int _y=0, int _x2=0, int _y2=0)
		{
			x = _x;
			y = _y;
			x2=_x2;
			y2=_y2;
		}
		virtual void Draw(Graphics ^gr)
		{
			gr->DrawLine(Pens::Black, x, y, x2, y2);
		}
		virtual void Hide(Graphics ^gr) {}
		virtual void MoveTo(Graphics ^gr, int _x, int _y) {}
		virtual void Move(Graphics ^gr, int _x, int _y) {}
	};

	//----------------------------------------------------------------------------
	class TChart : public TObject
	{
	public:
		TObject* begin;
		TObject *end;
		bool isVisitedB;
		bool isVisitedE;
	public:
		TChart()
		{
			begin = NULL;
			end = NULL;
			isVisitedB = false;
			isVisitedE = false;
		}
		void SetFirst(TObject *p) { begin = p; }
		void SetLast(TObject *p) { end = p; }
		virtual void Draw(Graphics ^gr){}
		virtual void Hide(Graphics ^gr){}
		virtual void MoveTo(Graphics ^gr, int _x, int _y){}
		virtual void Move(Graphics ^gr, int x, int y){}
		TObject *DrawRec(Graphics ^gr, TObject *t)
		{
			TChart *currLine;
			TPoint *pFp, *pLp;
			if (dynamic_cast<TPoint*>(t))
				return t;
			else
			{
				currLine = dynamic_cast<TChart*>(t);
				pFp = dynamic_cast<TPoint*>(DrawRec(gr, currLine->begin));
				pLp = dynamic_cast<TPoint*>(DrawRec(gr, currLine->end));
				if (pFp && pLp)
				{
					gr->DrawLine(Pens::LightGreen, pFp->x, pFp->y, pLp->x, pLp->y);
					return pFp;
				}
			}
		}
		void FindClosest(int x1, int y1, int x2, int y2)
		{
			bool insBegin = true;
			bool isEnd = true;
			Tstack <TChart*> st;
			st.clear();
			TChart *curr = this;
			st.Push(curr);
			bool isFirstPoint = true;
			TPoint *min;
			double distMIN;
			while (!st.IsEmpty())
			{
				TChart *tmp = st.Top();
				if (dynamic_cast<TChart*>(tmp->begin))
					st.Push(dynamic_cast<TChart*>(tmp->begin));
				if (dynamic_cast<TChart*>(tmp->end))
					st.Push(dynamic_cast<TChart*>(tmp->end));
				if (dynamic_cast<TPoint*>(tmp->begin))
				{
					tmp->isVisitedB = true;
					if (isFirstPoint)
					{
						min = dynamic_cast<TPoint*>(tmp->begin);
						distMIN = (min->x - x1)*(min->x - x1) + (min->y - y1)*(min->y - y1);
						distMIN = sqrt(distMIN);
						isFirstPoint = false;
					}
					TPoint *minTMP = dynamic_cast<TPoint*>(tmp->begin);
					double distTMP = (minTMP->x - x1)*(minTMP->x - x1) + (minTMP->y - y1)*(minTMP->y - y1);
					distTMP = sqrt(distTMP);
					if (distTMP<=distMIN)
					{
						distMIN = distTMP;
						min = minTMP;
						curr = tmp;
						isEnd = false;
						insBegin = true;
					}
					double distTMPE = (minTMP->x - x2)*(minTMP->x - x2) + (minTMP->y - y2)*(minTMP->y - y2);
					distTMPE = sqrt(distTMPE);
					if (distTMPE<=distMIN)
					{
						distMIN = distTMPE;
						min = minTMP;
						curr = tmp;
						isEnd = false;
						insBegin = false;
					}
				}
				if (dynamic_cast<TPoint*>(tmp->end))
				{
					tmp->isVisitedE = true;
					if (isFirstPoint)
					{
						min = dynamic_cast<TPoint*>(tmp->end);
						distMIN = (min->x - x1)*(min->x - x1) + (min->y - y1)*(min->y - y1);
						isFirstPoint = false;
						distMIN = sqrt(distMIN);
					}
					TPoint *minTMP = dynamic_cast<TPoint*>(tmp->end);
					double distTMP = (minTMP->x - x1)*(minTMP->x - x1) + (minTMP->y - y1)*(minTMP->y - y1);
					distTMP = sqrt(distTMP);
					if (distTMP<=distMIN)
					{
						distMIN = distTMP;
						min = minTMP;
						curr = tmp;
						isEnd = true;
						insBegin = true;
					}
					double distTMPE = (minTMP->x - x2)*(minTMP->x - x2) + (minTMP->y - y2)*(minTMP->y - y2);
					distTMPE = sqrt(distTMPE);
					if (distTMPE<=distMIN)
					{
						distMIN = distTMPE;
						min = minTMP;
						curr = tmp;
						isEnd = true;
						insBegin = false;
					}
				}
			}
			if (insBegin)
			{
				if (!isEnd)
				{
					TChart *ins = new TChart();
					ins->begin = new TPoint(min->x,min->y);
					ins->end = new TPoint(x2,y2);
					curr->SetFirst(ins);
				}
				if (isEnd)
				{
					TChart *ins = new TChart();
					ins->begin = new TPoint(min->x,min->y);
					ins->end = new TPoint(x2,y2);
					curr->SetLast(ins);
				}
			}
			if (!insBegin)
			{
				if (!isEnd)
				{
					TChart *ins = new TChart();
					ins->begin = new TPoint(min->x, min->y);
					ins->end = new TPoint(x1, y1);
					curr->SetFirst(ins);
				}
				if (isEnd)
				{
					TChart *ins = new TChart();
					ins->begin = new TPoint(min->x, min->y);
					ins->end = new TPoint(x1, y1);
					curr->SetLast(ins);
				}
			}
		}
	};
}