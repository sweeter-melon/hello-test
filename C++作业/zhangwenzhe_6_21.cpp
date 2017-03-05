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
	cout<<"请输入这条英文句子："<<endl;
	getline(cin,s);

	cout<<"这条英文句子中字母的个数为：";
	cout<<count(s)<<endl;
	

}

