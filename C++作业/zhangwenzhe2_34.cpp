#include<iostream>
using namespace std;
int main()
{
	int m,n,l;
	cout<<"�ڴ��������ɫ����: ";
		cin>>m;
	cout<<"ȡ�������ɫ��: ";
		cin>>n;
	int i,j;
	int h=1,k=1;

	for(i=m;i>=m-n+1;i--)
	{
		h*=i;
	}
	for(j=1;j<=n;j++)
	{
		k*=j;
	}
	l=h/k;
	cout<<"һ����"<<l<<"��ȡ�� "<<endl;

		return 0 ;
}


