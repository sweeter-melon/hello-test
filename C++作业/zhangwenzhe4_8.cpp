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
	cout<<"С���������� ��"<<age<<"��"<<endl;
}


inline void Dog::showWeight()
{
	cout<<"С���������� ��"<<weight<<"ǧ��"<<endl;
}


inline void Dog::showMeat()
{
	cout<<"С��ÿ�ٳ��� ��"<<meat<<"ǧ��"<<endl; 
}

int main()
{
	Dog h;
	cout<<"С���ĸ������� ��"<<endl;
	h.setAge(4);
	h.showAge();
	h.setWeight(25);
	h.showWeight();
	h.setMeat(0.5);
	h.showMeat();

	return 0;

}






































