#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	int a;
	
    cout<<"������һ��ʮ��������:";
    cin>>a;
	cout<<setiosflags(ios_base::dec);
	cout<<"ʮ�������:"<<a<<endl;

    cout<<resetiosflags(ios_base::dec)<<setiosflags(ios_base::oct);
    cout<<"�˽������:"<<a<<endl;

    cout<<resetiosflags(ios_base::oct)<<setiosflags(ios_base::hex);
	cout<<"ʮ���������:"<<a<<endl;


	return 0;

}