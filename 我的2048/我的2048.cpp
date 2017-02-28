#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<iomanip>
using namespace std;


int x[4][4];
int y[4][4];
int i;
int j;
int z;
int sum;

class Play
{
public:

void show();
void A();
void B();
void C();
void right();
void suiji();
void up();
void down();
void left();
void go(char c);
void work();
void graph();



public:
	Play()
{
for(i=0;i<4;i++)
{
 for(j=0;j<4;j++)
 {
	x[i][j]=0;

 }
}

	}
};





void main()
{

	initgraph(400,400);
	
	Play pt;
	pt.graph();
	pt.work();
	pt.show();

	int t;
	if(sum==1)
	{
		
	settextcolor(RGB(255,107,150));
	t=textwidth("恭喜你!");
	outtextxy((400-t)/2,100,"恭喜你!");
	settextstyle(40,0,"方正舒体");
	t=textwidth("你赢了!");
    settextstyle(40,0,"方正舒体");
	outtextxy((400-t)/2,250,"你赢了!");
	}

	else
	{
    settextcolor(RGB(255,107,150));
	t=textwidth("很遗憾!");
	outtextxy((400-t)/2,100,"很遗憾!!");
	settextstyle(40,0,"方正舒体");
	t=textwidth("你输了!");
    settextstyle(40,0,"方正舒体");
	outtextxy((400-t)/2,250,"你输了!");

	}
	getch();

 


	
	
	
}






void Play::show()
{
	
   
   setbkcolor(RGB(255,107,150));
   cleardevice();
   setlinecolor(RGB(0,0,0));
   setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 2);


   for(i=0;i<5;i++)
   {
   line(0,100*i,400,100*i);
   }
   for(j=0;j<5;j++)
   {
	line(100*j,0,100*j,400);
   } 

  for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			switch(x[i][j])
			{
			case 0:
				setfillcolor(RGB(255,106,147));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				break;
			case 2:
				setfillcolor(RGB(255,128,255));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"2");
				break;
				
			case 4:
				setfillcolor(RGB(128,255,128));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"4");
				break;
			case 8:
				setfillcolor(RGB(255,225,0));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"8");
				break;
			case 16:
				setfillcolor(RGB(255,0,128));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"16");
				break;
			case 32:
				setfillcolor(RGB(0,128,192));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"32");
				break;
			case 64:
				setfillcolor(RGB(0,0,255));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"64");
				break;
			case 128:
				setfillcolor(RGB(255,128,0));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"128");
				break;
			case 256:
				setfillcolor(RGB(0,128,0));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"256");
				break;
			case 512:
				setfillcolor(RGB(128,128,64));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"512");
				break;
			case 1024:
				setfillcolor(RGB(64,0,64));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"1024");
				break;
			case 2048:
				setfillcolor(RGB(64,0,64));
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
				settextstyle(60,0,"方正舒体");
				setbkmode(TRANSPARENT);
				outtextxy(100*i+20,100*j+20,"2048");
				break;
			}
		}
	}
}





void Play::A()  //将二维数组左右交换
{
    
    
    for(i=0;i<4;i++)
	{
        for(j=0;j<4;j++)
        {
            y[i][3-j]=x[i][j];
        }
	}
    for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			x[i][j]=y[i][j];
		}
	}
}


void Play::B()//将2维数组逆时针转动90° 
{
    
    
    for(i=0;i<4;i++)
	{
        for(j=0;j<4;j++)
        {
            y[3-j][i]=x[i][j];
        }
	}
    for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			x[i][j]=y[i][j];
		}
	}
}
void Play::C()//将2维数组顺时针转动90°
{
    
    
    for(i=0;i<4;i++) 
	{
        for(j=0;j<4;j++)
        {
            y[j][3-i]=x[i][j];
        }
	}
    for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			x[i][j]=y[i][j];
		}
	}
}

void Play::down()
  {
	  int k;
	  int t;
    for(i=0;i<4;i++)//一行一行地检测,向下推
    {
        for(j=k=3;j>=0 && x[i][j]==0;j--);
        if(j<0)
			continue;
            t=x[i][j],x[i][j]=0,x[i][k]=t;
            for(j--;j>=0;j--)
            {
                t=x[i][j];
                if(t!=0)             //程序的核心
                {
                    x[i][j]=0;
                    if(x[i][k]==t)
                    {
                        z--,x[i][k]+=t;
                        sum=(t==1024);
                    }
                    else
                    {
                        k--,x[i][k]=t;
                    }
                }
            }
    }
}
void Play::up()
	{
   
		this->A();
		this->down();
		this->A();
	}

	void Play::left()
	{

    this->C();
	this->down();
	this->B();


	}

	void Play::right()
	{
		this->B();
		this->down();
		this->C();

	}
	void Play::suiji()
{
    int k;
   while(1)
    {
        k=rand()%16;i=k/4;j=k%4;
        if(x[i][j]==0)
			break;
    }
    if(rand()%2!=0) 
    {
        x[i][j]=4;
    }
    else
    {
        x[i][j]=2;
    }
    z++;
} 
	void Play::go(char c) //执行推动操作
{
    
    switch(c)
    {
        case 'H': //按上键
            this->up();
        break;
        case 'K':  //按左键
            this->left();
        break;
		case 'M':
			this->right(); //按右键
			break;
        case 'P':   //按下键
            this->down(); 
        break;
    }
  
    this->suiji();
}

	void Play::work()
{
    char a,b;
    srand(time(0));
    this->suiji();
    this->suiji();
    this->show();
    while(z<16&&sum==0)
    {
        a=getch();
        if(a==-32)
        {
            b=getch();
            if(b==72||b==75||b==77||b==80)
            {
                this->go(b);
				this->show();
                
            }
        }
    }
}
	void Play::graph()
	{
    setbkcolor(RGB(255,106,147));
    cleardevice();
    settextcolor(RGB(255,255,255));
    settextstyle(40,0,"方正舒体");
	outtextxy(20,20,"欢迎进入2048游戏");
	settextcolor(RGB(0,0,0));
    settextstyle(20,0,"方正舒体");
    outtextxy(20,160,"游戏说明:");
	outtextxy(40,200,"用方向键控制移动");
	outtextxy(40,220,"up:向上移动 down:向下移动 ");
	outtextxy(40,240,"left:向左移动 right:向右移动");
    getch();
	}


