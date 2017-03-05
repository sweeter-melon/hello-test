#include<iostream>
using namespace std;

class Mammal
{
public:
	virtual void speak() const;
};

void Mammal::speak() const
{
	cout<<"Mammal::speak()"<<endl;
}

class Dog:public Mammal
{
public:
	void speak() const;
};

void Dog::speak() const
{
	cout<<"Dog::speak()"<<endl;

}

void main()
{
 Dog h;
 h.speak();
 Mammal *p=&h;
 p->speak();
}

