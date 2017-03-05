#include<iostream>
using namespace std;

class Base
{
	public :
	void fn1()
	{
		cout<<"Constructing fn1"<<endl;
	}
	void fn2()
	{
		cout<<"Constructing fn2"<<endl;
	}
	
};
class Derived:private Base
{
	public:
	void fn();
};
void Derived::fn()
{
	Base::fn1();
	Base::fn2();
}
int main()
{
	Derived d;
	d.fn();
	return 0;
}
