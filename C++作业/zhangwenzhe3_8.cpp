#include<iostream>
using namespace std;

 int change(float h)
 {
	 
	 float m ;

	 
     m=5*(h-32)/9;


return m;

 }



int main()
{
	float n;
	cout<<"���뻪���¶ȣ�";

		cin>>n;

	

	cout<<"��������¶ȣ�"<<change(n)<<endl;

 return 0;

}