#include<iostream>
using namespace std;

int fun1(int n)
{
     int m;
	 if(n==1||n==2)
	 {
		 m=1;
	 }
	 else
	 {
		 m=fun1(n-1)+fun1(n-2);

	 }

		 return m ;

	 

}
	 int fun2(int n)
	 {
		 int f1=1,int f2=1;
		 int i,m;
		 if(n==1||n==2)
		 {
             m=1;
		 }
		 else
		 {

		   if(n%2==1)
		 {
		 for(i=1;i<=n/2;i++)
		 {
			 f1=f1+f2;
			 f2=f2+f1;
		 }
             m=f1;
		   }

            else
			{
				for(i=1;i<n/2;i++)
				{
					f1=f1+f2;
					f2=f2+f1;
				}
				m=f2;
			}
		 }

		 return m;

	 }
	 int main()
	 {
		 int n;
		 cout<<"�����뼶�� :";
		 cin>>n;
		 int change;
		 cout<<"��������õݹ���ã�������0 ,"<<endl;
		 cout<<"��������÷ǵݹ飬������1 ��";
		 cin>>change;

		 switch(change)
		 {
		 case 0:
			 cout<<"������ ��"<<fun1(n)<<endl;
			 break;

		 case 1:
             cout<<"������ ��"<<fun2(n)<<endl;
			 break;

		 default:
			 cout<<"���벻��ȷ��"<<endl;
			 break;
		 }
		 return 0;
	 }






		 