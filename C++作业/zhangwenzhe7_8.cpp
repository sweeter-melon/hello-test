#include <iostream>
using namespace std;
#include <string>

class Document{
public:
Document(string name)
{
cout<<"书的名字是："<<name<<endl;
}





};

class Book:public Document{


public:

    Book(string name,int pageCount)
    {
		this->pageCount=pageCount;	
    }
    void show()
    {
        

        cout<<"书的页数是："<<pageCount<<endl;


    }

private:

    int pageCount;




};

int main()
{
    Book h("数学",100);
    h.show();

    return 0;
}
