#ifndef ORDERLIST_H
#define ORDERLIST_H 
#include"Node.h"
#include"LinkedList.h"
template<class T>
class OrderList:public LinkedList<T>{
	public:
		void insert(T &item);
};
template<class T>
void OrderList<T>::insert(T &item)
{
	int sum;
	reset();
	if(isEmpty()) 
	{
		insertFront(item);
	}
	else
	{ 
		sum=0;
		int s=getsize();
		while(s==getsize())
		{
			if(item<data())
			{
				insertAt(item);
				break;
			}
			sum++;
			if(sum==s)
			{
				insertAfter(item);
				break;
			}
			next();
		}
		
	}
}
#endif