#include <iostream>
using namespace std;
#include <string>

class Document{
public:
Document(string name)
{
cout<<"��������ǣ�"<<name<<endl;
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
        

        cout<<"���ҳ���ǣ�"<<pageCount<<endl;


    }

private:

    int pageCount;




};

int main()
{
    Book h("��ѧ",100);
    h.show();

    return 0;
}
