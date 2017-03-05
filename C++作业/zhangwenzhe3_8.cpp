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
	cout<<"输入华氏温度：";

		cin>>n;

	

	cout<<"输出摄氏温度："<<change(n)<<endl;

 return 0;

}