#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	int a;
	
    cout<<"请输入一个十进制整数:";
    cin>>a;
	cout<<setiosflags(ios_base::dec);
	cout<<"十进制输出:"<<a<<endl;

    cout<<resetiosflags(ios_base::dec)<<setiosflags(ios_base::oct);
    cout<<"八进制输出:"<<a<<endl;

    cout<<resetiosflags(ios_base::oct)<<setiosflags(ios_base::hex);
	cout<<"十六进制输出:"<<a<<endl;


	return 0;

}