#include<iostream>
#include<ctime>
#include<Windows.h>
#include<cstdlib>

using namespace std;

class Poker
{

public:
	Poker();

	void shufter();

	void display();

	void playgame();

private:

	int card[52];

};

int main()
{
  Poker pk;

  pk.display();

  cout<<endl;

  pk.shufter();

  pk.display();

  pk.playgame();

  return 0;

}

Poker::Poker()
{
	int i;

	for(i=0;i<52;i++)
	{
		card[i]=i;

	}

}

void Poker::display()
{
	int i;

	for(i=0;i<52;i++)
	{
		int a;

		int b;

		a=card[i]%13+1;

		b=card[i]/13+3;
		
		cout<<char(b)<<a<<" ";

		if((i+1)%13==0)
		{
			cout<<endl;

		}

	}

	cout<<endl;

}

void Poker::shufter()
{
	int i;

	for(i=0;i<100;i++)
	{
		int a;

		int b;

		srand(time(0));

		a=rand()%52;

		Sleep(100);

		b=rand()%52;

		if(a!=b)
		{

			int c=card[a];

			card[a]=card[b];

			card[b]=c;

		}

		Sleep(100);
	}
}

 void Poker::playgame()
 {


	int play_sum=0;
	int com_sum=0;
	int flag=0;
	cout<<"                      ��ʼ21��ֽ����Ϸ                  "<<endl;
	play_sum+=card[0]%13+1;
	com_sum+=card[1]%13+1;
	cout<<"*******         "<<"��õ������� "<<card[0]%13+1<<char (card[0]/13+3)<<"                                      ****"<<endl;
	cout<<"*******         "<<"����Ҫ����Ҫ���� ?"<<"                       ****"<<endl;
	cout<<"*******         "<<"1----Ҫ��0----��Ҫ"<<"                          ****"<<endl;
	cin>>flag;
	int k=2;
	int p=3;
	while (flag==1)
	{
		
		cout<<"*******         "<<"��õ������� "<<card[k]%13+1<<char (card[k]/13+3)<<"     ****"<<endl;
		play_sum+=card[k]%13+1;
		cout<<"*******        "<<"�㻹��Ҫ��һ������ ?"<<"                        ****"<<endl;
		cout<<"*******       "<<"1----Ҫ��0----��Ҫ"<<"                            ****"<<endl;
		cin>>flag;
		if(com_sum>16)
		{
			k++;
		}
		else 
		{
			com_sum+=card[p]%13+1;
			k=k+2;
			p=p+2;
		}
	}
	while (flag==0)
	{
		if(com_sum<=16)
		{
			com_sum+=card[k]%13+1;
			k++;
		}
		else if(com_sum>16)
			break;
	
	}
	cout<<"*******       "<<"�����ĵ����ǣ�  "<<play_sum<<"                                 ****"<<endl;
	cout<<"*******       "<<"���Եĵ����ǣ� "<<com_sum<<"                       ****"<<endl;
	while(play_sum<=21 && com_sum<=21)
	{
		if(play_sum>com_sum)
			cout<<"��ϲ�㣬 ��Ӯ�� !"<<endl;
		else if(play_sum<com_sum)
			cout<<"���ź���������  !"<<endl;
		else 
			cout<<"���ɣ�������ƽ�� !"<<endl;
		break;
	}
	while(play_sum>21)
	{
		cout<<"you lose"<<endl;
		break;
	}
	while(com_sum>21)
	{
		cout<<"��ϲ�㣬��Ӯ�� !"<<endl;
		break;
	}
}


















































































