#include<iostream>

using namespace std;


class Rectangle{

public:
         void chushihua(int **x,int a,int b);

		 
		 
		 

private:

	int **x;
	int a;
	int b;

};

void Rectangle::chushihua(int **x,int a,int b)
{
	
	x=new int*[a];

		for(int i=0;i<a;i++)
		{
			x[i]=new int[b];

		}


		cout<<"输入的矩阵数值为："<<endl;
		for(int m=0;m<a;m++)
		{
			for(int k=0;k<b;k++)

			{
				
				cin>>x[m][k];

			}

		}

		cout<<"输入的矩阵为："<<endl;


		for( m=0;m<a;m++)
		{
			for( int k=0;k<b;k++)

			{
				cout<<x[m][k]<<" ";

			}

			cout<<endl;

		}

			cout<<"输出的转置矩阵为："<<endl;
		for( m=0;m<a;m++)
		{
			for(int k=0;k<b;k++)

			{
				cout<<x[k][m]<<" ";
				
			}

             cout<<endl;

		}
		
	}












int main()
		{
	int **x;
    int a;
	int b;

    cout<<"请输入矩阵的行：";
	cin>>a;
    cout<<"请输入矩阵的列：";
	cin>>b;

			Rectangle h;

			h.chushihua(x,a,b);

	
	

			return 0;

		}