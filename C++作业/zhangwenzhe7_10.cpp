#include<iostream>
using namespace std;
class Object{
	public:
	Object()
	{
		cout<<"Constructing Object"<<endl;
		
	}

	~Object()
	{
		cout<<"Destructing Object"<<endl;
	}
	
	void setWeight(float x)
	{
		weight=x;
		
	}	

	void getWeight() 
	{
		cout<<"���ӵ�����Ϊ��"<<weight<<endl;
	}

	private:

	float weight;
};
class Box:public Object{
	public:
	
	Box()
	{
		cout<<"Constructing Box"<<endl;
		
	}

	~Box()
	{
		cout<<"Destructing Box"<<endl;
	}

	void setHeight(float y)
	{
		height=y;
	}

	void getHeight()
	{
		cout<<"���ӵĸ߶�Ϊ��"<<height<<endl;
	
}
void setWidth(float z)
	{
		width=z;
	}
	void getWidth()
	{
		cout<<"���ӵĿ��Ϊ��"<<width<<endl;
	
}

private:

float height;

float width;
};
int main()
{
	Box h;
	h.setHeight(5);
	h.getHeight();
	h.setWeight(10);
	h.getWeight();
	h.setWidth(6);
	h.getWidth();
	return 0;
	
}

