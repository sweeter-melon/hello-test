#include<iostream>
using namespace std;

class Cat {
	public:

		Cat()
		{
			numOFCats++;
		}
		
		~Cat()
		{
			numOFCats--;

		}
		static void getnumOFCats()
		{

			cout<<"ĿǰCat�ĸ�����Ŀ= "<<numOFCats<<endl;

		}

	private:
		static int numOFCats;

};

int Cat::numOFCats=0;


int main()
{

	Cat a;

	Cat::getnumOFCats();

	Cat b;

	Cat::getnumOFCats();

	Cat c;

	Cat::getnumOFCats();



return 0;
}