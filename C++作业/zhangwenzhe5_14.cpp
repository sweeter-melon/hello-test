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

  cout<<"小车和船的重量之和 ：";

	  cout<<getTotalWeight(myp1,myp2)<<"千克"<<endl;

  return 0;

}



























