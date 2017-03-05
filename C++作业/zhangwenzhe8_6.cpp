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
	
	cout<<"���ε������"<<x.getArea()<<endl;
    cout<<"���ε��ܳ���"<<x.getPerim()<<endl;
	cout<<"Բ�������"<<y.getArea()<<endl;
	cout<<"Բ���ܳ���"<<y.getPerim()<<endl;

	return 0;
}
