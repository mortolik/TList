#pragma once
#include "TList.h"
struct TMonom
{
	double Coeff;
	int index;
};
template <class T>
class THeadList:public TList<T>
{
protected:
	TNode <T>* pHead;
public:
	THeadList()
	{
		pHead = new TNode<T>;
		pHead->pNext = pHead;
		pStop = pFirst = pPr = pCurr = pHead;
		pos = -1;
		len = 0;
	}
	~THeadList()
	{
		TList<T>::DelList();
		delete pHead;
	}
	void InsFirst(T val)
	{
		TList<T>::InsFirst(val);
		pHead->pNext = pFirst;
	}
};

