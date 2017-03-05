#include<iostream>
using namespace std;
template <class T>
void myswap(T&x,T&y)
{
	T temp=x;
	x=y;
	y=temp;
}
template <class T>
void bubblesort(T*a[],int m,int n)
{
	for(int q=0;q<m;q++)
	{
		int i=n-1;
		while(i>0)
		{
			int last=0;
			for(int j=0;j<i;j++)
			   if(a[q][j]<a[q][j+1])
			   {
				   myswap(a[q][j],a[q][j+1]);
				   last=j;
			   }
			   i=last;
		}
	}
}
int main()
{
 
	int b1[5]={54,5,6,3,8};
	int b2[5]={ 63,12,25,62,89};
	int b3[5]={ 25,21,20,78,84};
	int *a[3]={b1,b2,b3};
	bubblesort(a,3,5);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<a[i][j]<<" ";
		}
	
	  cout<<endl;
	}
	return 0;

}