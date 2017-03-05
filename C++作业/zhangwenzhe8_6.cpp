#include <iostream>
using namespace std;
const float PI=3.14;
class Shape
{
public:
	virtual float getArea()=0;
	virtual float getPerim()=0;
};

class Rectangle : public Shape
{
public:
	Rectangle(float a,float b)
	{
		this->a=a;
		this->b=b;
	}
	float getArea()
	{
		return a*b;
	}
	float getPerim()
	{
		return 2*(a+b);
	}

private:
	float a;
	float b;
};

class Circle : public Shape
{
public:
	Circle(float r)
	{
		this->r=r;
	}
	float getArea()
	{
		return r*r*PI;
	}

	float getPerim()
	{
       return 2*PI*r;
	   }
private:
	float r;
};



int main()
{
	Rectangle x(100,150);
	Circle y(50);
	
	cout<<"矩形的面积："<<x.getArea()<<endl;
    cout<<"矩形的周长："<<x.getPerim()<<endl;
	cout<<"圆的面积："<<y.getArea()<<endl;
	cout<<"圆的周长："<<y.getPerim()<<endl;

	return 0;
}
