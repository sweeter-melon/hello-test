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
		cout<<"���Լ��:"<<y<<endl;
		cout<<"��С������: "<<h/y<<endl;
}

int main()
{
	int x;
	int y;

	cout<<"�����һ����: " ;
		cin>>x;
		cout<<"����ڶ�����: ";
		cin>>y;

	fun1(x,y);

	return 0;

}


		
		
	

