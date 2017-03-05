#include <iostream>
using namespace std;

class Mammal{
public:
    Mammal(float a)
    {

        cout<<"Constructing Mammal"<<endl;
    }
    ~Mammal()
    {

        cout<<"Destructing Mammal"<<endl;
    }


};

class Dog:public Mammal{

public:
    Dog(float b):Mammal(b)
    {
        cout<<"小狗的体重是："<<b<<endl;

    }

   ~Dog()
   {
       cout<<"Destructing Dog"<<endl;
   }

private:
    float b;


};

int main()
{
    Dog x(5);
    return 0;


    }
