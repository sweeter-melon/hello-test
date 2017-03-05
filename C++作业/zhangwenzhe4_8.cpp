#include<iostream>
using namespace std;

class Dog
{
public:
	void setAge(int x)
	{
		age=x;
	}
	void showAge();

	void setWeight(float y)
	{
		weight=y;
	}
	void showWeight();

	void setMeat(float z)
	{
		meat=z;
	}
	void showMeat();

private:
	int age;
	
	float weight;

	float meat;
};
inline void Dog::showAge()
{
	cout<<"小狗的年龄是 ："<<age<<"岁"<<endl;
}


inline void Dog::showWeight()
{
	cout<<"小狗的体重是 ："<<weight<<"千克"<<endl;
}


inline void Dog::showMeat()
{
	cout<<"小狗每顿吃肉 ："<<meat<<"千克"<<endl; 
}

int main()
{
	Dog h;
	cout<<"小狗的各种属性 ："<<endl;
	h.setAge(4);
	h.showAge();
	h.setWeight(25);
	h.showWeight();
	h.setMeat(0.5);
	h.showMeat();

	return 0;

}






































