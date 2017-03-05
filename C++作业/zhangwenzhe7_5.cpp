#include <iostream>
using namespace std;
const float PI=3.14;
class Shape
{
public:
	Shape(float a,float b=0.0)
	{
		this->a=a;
		this->b=b;
	}
protected:
	float a;
	float b;
};

class Rectangle : public Shape
{
public:
	Rectangle(float c,float d):Shape(c,d)
	{
	}
	float getArea()
	{
		return a*b;
	}
};

class Circle : public Shape
{
public:
	Circle(float r):Shape(r)
	{
	}
	float getArea()
	{
		return a*a*PI;
	}
};

class Square : public Rectangle
{
public:
	Square(float c):Rectangle(c,c)
	{
	}
	float getArea()
	{
		return a*a;
	}
};


int main()
{
	Rectangle x(100,150);
	Circle y(50);
	Square z(200);
	cout<<"矩形的面积："<<x.getArea()<<endl;
	cout<<"圆的面积："<<y.getArea()<<endl;
	cout<<"正方形的面积："<<z.getArea()<<endl;

	return 0;
}
