#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n;
	for(i=2;i<=100;i++)
	{
		m=1;
		n=i-1;
    for(j=2;j<=n;j++)
	{
		if(i%j==0)
		{
			m=0;
		break;
		}
	}
	if(m)
		cout<<i<<" ";
	
	}
	return 0;
}
