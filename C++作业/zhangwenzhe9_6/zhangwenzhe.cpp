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
	 cout<<"������A������: ";
	cin>>n;
	cout<<"������A����Ԫ�أ�";
	for(i=0;i<n;i++)
	{
		cin>>item;
		A.insert(item);
	}
	cout<<" �����A˳������";
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
	cout<<"������B������: ";
	cin>>n;
	cout<<"������B����Ԫ�أ�";
	for(i=0;i<n;i++)
	{
		cin>>item;
		B.insert(item);
	}
	cout<<"�����B˳������";
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
	cout<<"����B����Ԫ�غ��A����";
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