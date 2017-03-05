#include<iostream>
#include<cstdlib>
#include"Node.h"
#include"LinkedList.h"
#include"OrderList.h"

using namespace std;
int main()
{
	OrderList<int>A;
	OrderList<int>B;
	int n,item,i;
	 cout<<"请输入A链表长度: ";
	cin>>n;
	cout<<"请输入A链表元素：";
	for(i=0;i<n;i++)
	{
		cin>>item;
		A.insert(item);
	}
	cout<<" 排序后A顺序链表：";
	A.reset();
	while(1)
	{
		cout<<A.data()<<"-->";
		A.next();
		if(A.endOfList())
		{
			cout<<A.data()<<endl;
			break;
		}
	}
	cout<<"请输入B链表长度: ";
	cin>>n;
	cout<<"请输入B链表元素：";
	for(i=0;i<n;i++)
	{
		cin>>item;
		B.insert(item);
	}
	cout<<"排序后B顺序链表";
	B.reset();
		while(1)
	{
		cout<<B.data()<<"->";
		B.next();
		if(B.endOfList())
		{
			cout<<B.data()<<endl;
			break;
		}
	}
	B.reset();
	for(;B.currentPosition()<n;)
	{
		A.insert(B.data());
		B.next();
	}
	cout<<"插入B链表元素后的A链表：";
	A.reset();
	while(1)
	{
		cout<<A.data()<<"->";
		A.next();
		if(A.endOfList())
		{
			cout<<A.data()<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}