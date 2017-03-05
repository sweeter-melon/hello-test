#include<iostream>
using namespace std;

void fun1(int x,int y)
{
	int t;
	int h;
	int s;
	
		if(y>x)
		{
			t=y;
			y=x;
			x=t;
		}
 
	  h=x*y;
		s=x%y;
		while(s!=0)
		{
			x=y;
			y=s;
			s=x%y;
		}
		cout<<"最大公约数:"<<y<<endl;
		cout<<"最小公倍数: "<<h/y<<endl;
}

int main()
{
	int x;
	int y;

	cout<<"输入第一个数: " ;
		cin>>x;
		cout<<"输入第二个数: ";
		cin>>y;

	fun1(x,y);

	return 0;

}


		
		
	

