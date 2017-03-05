#include<iostream>
using namespace std;

class Complex
{
public:
	Complex(float x=0.0,float y=0.0)
	{
		shibu=x;
		xubu=y;

	}
	
//	Complex(Complex &p);
	
void add(Complex p)
{
	shibu=shibu+p.shibu;
	xubu=xubu+p.xubu;

}


		

	void show()
	{
		cout<<shibu<<"+"<<xubu<<"i"<<endl;
	}
private:
	float shibu;
	float xubu;
};
/*Complex::Complex(Complex &p)

{
	shibu=p.shibu;
	xubu=p.xubu;
}
 */


int main()
{
	Complex c1(3,5);
	Complex c2=4.5;
	c1.add(c2);
	c1.show();

}





