#include<iostream>
#include<string>

using namespace std;



int  count(string s)
{

	int j=0;
	
for(int i=0;i<s.size();i++)
{
	if((s[i]>64&&s[i]<91)||(s[i]>96&&s[i]<123))
		j++;
}

return j;

}

	

void main()
{
	string s;
	cout<<"����������Ӣ�ľ��ӣ�"<<endl;
	getline(cin,s);

	cout<<"����Ӣ�ľ�������ĸ�ĸ���Ϊ��";
	cout<<count(s)<<endl;
	

}

