#include<iostream>
using namespace std;

class Boat;

class Car {

public:
	
	Car(float x)
	{
		weight=x;

	}


	friend float getTotalWeight(Car a,Boat b);

private:

	float weight;
};

class Boat{

public:

	Boat(float y)
	{
		weight=y;

	}

   friend float getTotalWeight(Car a,Boat b);

private:

	float weight;
};

float getTotalWeight(Car a,Boat b)
{

	float h;

	h=a.weight+b.weight;

	return h;

}

int main()
{

  Car myp1(500);

  Boat myp2(4800);

  cout<<"С���ʹ�������֮�� ��";

	  cout<<getTotalWeight(myp1,myp2)<<"ǧ��"<<endl;

  return 0;

}



























