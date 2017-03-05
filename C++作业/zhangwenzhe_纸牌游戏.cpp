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
	cout<<"                      开始21点纸牌游戏                  "<<endl;
	play_sum+=card[0]%13+1;
	com_sum+=card[1]%13+1;
	cout<<"*******         "<<"你得到的牌是 "<<card[0]%13+1<<char (card[0]/13+3)<<"                                      ****"<<endl;
	cout<<"*******         "<<"你想要继续要牌吗 ?"<<"                       ****"<<endl;
	cout<<"*******         "<<"1----要，0----不要"<<"                          ****"<<endl;
	cin>>flag;
	int k=2;
	int p=3;
	while (flag==1)
	{
		
		cout<<"*******         "<<"你得到的牌是 "<<card[k]%13+1<<char (card[k]/13+3)<<"     ****"<<endl;
		play_sum+=card[k]%13+1;
		cout<<"*******        "<<"你还想要下一张牌吗 ?"<<"                        ****"<<endl;
		cout<<"*******       "<<"1----要，0----不要"<<"                            ****"<<endl;
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
	cout<<"*******       "<<"你最后的点数是：  "<<play_sum<<"                                 ****"<<endl;
	cout<<"*******       "<<"电脑的点数是： "<<com_sum<<"                       ****"<<endl;
	while(play_sum<=21 && com_sum<=21)
	{
		if(play_sum>com_sum)
			cout<<"恭喜你， 你赢了 !"<<endl;
		else if(play_sum<com_sum)
			cout<<"很遗憾，你输了  !"<<endl;
		else 
			cout<<"很巧，你们是平局 !"<<endl;
		break;
	}
	while(play_sum>21)
	{
		cout<<"you lose"<<endl;
		break;
	}
	while(com_sum>21)
	{
		cout<<"恭喜你，你赢了 !"<<endl;
		break;
	}
}


















































































