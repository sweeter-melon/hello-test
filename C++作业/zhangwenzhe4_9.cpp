#include<iostream>
#include<cmath>
using namespace std;

class Rectangle
{
public:

	void leftdown(int a1,int b1)
	{
		a=a1;
		b=b1;
	}

	void rightup(int c1,int d1)
	{

		c=c1;
		d=d1;
	}

	float getArea()
	{

		return fabs(c-a)*fabs(d-b);

	}


private:

	int a,b;
	int c,d;

};

int main()
{

	Rectangle h;

	h.leftdown(10,20);
	h.rightup(100,200);

	cout<<"矩形的面积是 ："<<h.getArea()<<endl;

	return 0;

}























