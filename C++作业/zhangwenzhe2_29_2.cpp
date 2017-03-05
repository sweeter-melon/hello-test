#include<iostream>
using namespace std;
int main ()
{
	int i,j,m,n;
	i=2;
	do
	{	

		n=i/2;
		m=1;
		j=2;
       do
	   {
		   if(i==2)
		   {
			   cout<<i<<" ";
		   }
		   if(i%j==0)
		   {
			   m=0;
			   break;
		   }
		   j++;
	   }
	   while(j<=n);
		   if(m)
			   cout<<i<<" ";
		   i++;
	}
	while(i<=100);
		return 0;
}