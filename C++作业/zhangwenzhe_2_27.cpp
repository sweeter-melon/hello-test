#include<iostream>
using namespace std;
int main ()
{
	int degree;
	cout<<"你考试考了多少分: "<<endl;
	cin>>degree;
	if(degree>=80)
       if(degree<90)
		   cout<<"良"<<endl;
	   else
		   cout<<"优"<<endl;


    else
        	if(degree>=60)
       
		   cout<<"中"<<endl;
	   else
		   cout<<"差"<<endl;

	   return 0;
}

