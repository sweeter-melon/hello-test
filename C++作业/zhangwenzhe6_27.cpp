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

cout<<"������"<<name<<endl;

cout<<"��ַ��"<<address<<endl;

cout<<"���У�"<<city<<endl;

cout<<"�ʱࣺ"<<postcode<<endl;

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

       cout<<"������������";
	   cin>>name;
	   cout<<"�������ַ��";
       cin>>address;
       cout<<"��������У�";
       cin>>city;
	   cout<<"�������ʱࣺ";
       cin>>postcode;

       Employee h;
	   
	   h.set(name,address,city,postcode);

	   h.display();

	   cout<<"�������޸ĵ�������";
       cin>>name;
	   h.setName(name);

	   h.display();

}






