#include<iostream>
using namespace std;

class BaseClass
{
public:
	virtual void fn1()
	{
		cout<<"BaseClass fn1"<<endl;
	}
	void fn2()
	{
		cout<<"BaseClass fn2"<<endl;

	}



};

class DerivedClass:public BaseClass
{
public:

	void fn1()
	{
		cout<<"DerivedClass fn1"<<endl;
	}
	void fn2()
	{
        cout<<"DerivedClass fn2"<<endl;
	}

};

int main()
{
	DerivedClass h;
	BaseClass *x=&h;
	x->fn1();
	x->fn2();
	DerivedClass *y=&h;
	y->fn1();
	y->fn2();

	return 0;
}