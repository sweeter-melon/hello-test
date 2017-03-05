#include<iostream>
#include<string>

using namespace std;

class Employee
{
public:
	void display();
	void set(string name,string address,string city,string postcode);
	void setName(string name);

private:
	string name;
	string address;
	string city;
	string postcode;


};

void Employee::display()
	{

cout<<"姓名："<<name<<endl;

cout<<"地址："<<address<<endl;

cout<<"城市："<<city<<endl;

cout<<"邮编："<<postcode<<endl;

}


void Employee::setName(string name)

	{

	this->name=name;
	

}


void Employee::set(	string name,string address,string city,string postcode)

{
	this->name=name;
	

	this->address=address;
	

	this->city=city;
	

	this->postcode=postcode;
	
}


void main()
{
 	   string name;
	   string address;
	   string city;
	   string postcode;

       cout<<"请输入姓名：";
	   cin>>name;
	   cout<<"请输入地址：";
       cin>>address;
       cout<<"请输入城市：";
       cin>>city;
	   cout<<"请输入邮编：";
       cin>>postcode;

       Employee h;
	   
	   h.set(name,address,city,postcode);

	   h.display();

	   cout<<"请输入修改的姓名：";
       cin>>name;
	   h.setName(name);

	   h.display();

}






