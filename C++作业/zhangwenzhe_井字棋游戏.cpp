#include<iostream>

using namespace std;

class Chess

{
public:
	void display(char a[],int m);

	void playgame();

	void chushihua(char a[]);


private:
	int a[9];

};


void Chess::display(char a[],int m)
{
	
 
	cout<<"                "<<"��ʾ������Ŀǰ�������"<<"        "<<endl;

	cout<<"################################"<<endl;

    cout<<"               |"<<"---"<<"+"<<"---"<<"+"<<"---"<<"|"<<endl;

	cout<<"               |"<<" "<<a[0]<<" "<<"|"<<" "<<a[1]<<" "<<"|"<<" "<<a[2]<<" "<<"|"<<endl;

    cout<<"               |"<<"---"<<"+"<<"---"<<"+"<<"---"<<"|"<<endl;

    cout<<"               |"<<" "<<a[3]<<" "<<"|"<<" "<<a[4]<<" "<<"|"<<" "<<a[5]<<" "<<"|"<<endl;

    cout<<"               |"<<"---"<<"+"<<"---"<<"+"<<"---"<<"|"<<endl;

    cout<<"               |"<<" "<<a[6]<<" "<<"|"<<" "<<a[7]<<" "<<"|"<<" "<<a[8]<<" "<<"|"<<endl;

    cout<<"               |"<<"---"<<"+"<<"---"<<"+"<<"---"<<"|"<<endl;




	cout<<"################################"<<endl;
	
}







void main()
{

cout<<"               "<<"��ӭ���� ��������Ϸ"<<endl;

cout<<endl;

cout<<"     "<<"����Ϸ��1����9��������λ��,��'O'��'X'��ʾ����"<<endl;

cout<<endl;


	int m=0;
    int i;
	char O;
	char X;
	char a[9]={'1','2','3','4','5','6','7','8','9'};
	Chess h;
	
	h.display(a,9);

	char b[9]={};

	for(i=0;i<5;i++)
	{

	cout<<"�ֵ����1����"<<endl;
	int x;
	cout<<"����Ҫ�������䵽1����9����һ����: ";

	cin>>x; 
	m++;
			
			a[x-1]='O';
		h.display(b,9);



	
		


		if(a[0]=='O'&&a[1]=='O'&&a[2]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}
		

		if(a[3]=='O'&&a[4]=='O'&&a[5]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}
		

		if(a[6]=='O'&&a[7]=='O'&&a[8]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}

		if(a[0]=='O'&&a[3]=='O'&&a[6]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}

		if(a[1]=='O'&&a[4]=='O'&&a[7]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}

		if(a[2]=='O'&&a[5]=='O'&&a[8]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}

		if(a[0]=='O'&&a[4]=='O'&&a[8]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}

		if(a[2]=='O'&&a[4]=='O'&&a[6]=='O')
		{
			cout<<"��ϲ���1��ʤ"<<endl;
			break;
		}

	if(m==9)
		{
			cout<<"���ɣ�����������ƽ��";
			break;
	}




	cout<<"�ֵ����2����"<<endl;
	int y;
	cout<<"����Ҫ�������䵽1����9����һ����: ";

	cin>>y; 
m++;
	
			a[y-1]='X';
		h.display(b,9);


	if(a[0]=='X'&&a[1]=='X'&&a[2]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}
		

		if(a[3]=='X'&&a[4]=='X'&&a[5]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}
		

		if(a[6]=='X'&&a[7]=='X'&&a[8]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}

		if(a[0]=='X'&&a[3]=='X'&&a[6]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}

		if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}

		if(a[2]=='X'&&a[5]=='X'&&a[8]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}

		if(a[0]=='X'&&a[4]=='X'&&a[8]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}

		if(a[2]=='X'&&a[4]=='X'&&a[6]=='X')
		{
			cout<<"��ϲ���2��ʤ"<<endl;
			break;
		}
	

	



		
		
		
	



}
}