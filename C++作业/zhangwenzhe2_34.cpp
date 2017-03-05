#include<iostream>
using namespace std;
int main()
{
	int m,n,l;
	cout<<"口袋中球的颜色总数: ";
		cin>>m;
	cout<<"取出球的颜色数: ";
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
	cout<<"一共有"<<l<<"种取法 "<<endl;

		return 0 ;
}


