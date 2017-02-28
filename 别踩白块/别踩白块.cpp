#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<time.h>
#include<Windows.h>
#include<iostream>
#pragma comment(lib,"Winmm.lib") //插入音乐头文件

using namespace std;

int x[5][5];
int max=0;     //记录历史最高得分
int sum=0;    //记录当局游戏得分
int p;        //判断游戏是否要继续进行的变量
int i;
int j;
int s=3;


class Play{

public:
	void startgraph();
	void dispaly();
    void endgraph();
	void suiji();
	void push();
    void work();
	void jishi();
	void help();
	void playgame();
	int one();
	int two();
	int three();
	int four();
	
	Play()
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				x[i][j]=0;
			}
		}
             for(j=3;j>=0;j--)
			{
				i=rand()%4;
				x[i][j]=1;
		
			}
	}
};

void main()
{


	initgraph(400,500);

     mciSendString( "open ./music/bk.mp3 alias bk", 0, 0, 0 );
	mciSendString( "play bk repeat", 0, 0, 0 );
      
    Play pt;
      
	pt.startgraph();
	
	
	
	


}

void Play::startgraph()
{
  
    setfillstyle(BS_SOLID);
    setbkcolor(RGB(255,106,147));
	cleardevice();

    MOUSEMSG m;
    setfillcolor(RGB(0,128,128));
    solidrectangle(125, 200, 275, 250);
    solidrectangle(125, 260, 275, 310);
	solidrectangle(125, 320, 275, 370);

    setlinecolor(RED);			
	rectangle(120, 195, 280, 255);
	rectangle(120, 255, 280, 315);
	rectangle(120, 315, 280, 375);

	settextstyle(30,0,"方正舒体");
	setbkmode(TRANSPARENT);
	outtextxy(145, 213, "开始游戏");
	outtextxy(145, 273, "游戏帮助");
	outtextxy(145 ,333, "结束游戏");
			
    settextstyle(50,0,"方正舒体");
	settextcolor(RGB(255,255,255));
	outtextxy(50,100,"别踩白块游戏");

	
	while(true)
	{
		m = GetMouseMsg();				// 判断是否按下鼠标
		if(m.x >= 125 && m.x <= 275 && m.y >= 200 && m.y <= 250)
		{
			
			if(m.uMsg==WM_LBUTTONDOWN )
			{   
				
    	
				this->work();
			}
		}

            if(m.x >= 125&& m.x <= 275 && m.y >= 260&& m.y <= 310)
		{
			
			if(m.uMsg==WM_LBUTTONDOWN)
			{   
             
       
				this->help();
			}
		}
	
		
		 
			if(m.x >= 125 && m.x <= 275 && m.y >= 320&& m.y <= 370)
		{
			
			if(m.uMsg==WM_LBUTTONDOWN)
			{   
             
       
				closegraph();
			}
		}
	}

	
}

void Play::help()
{
    setbkcolor(RGB(64,0,64));
	cleardevice();

	settextcolor(RGB(249,191,100));
	settextstyle(60,0,"方正舒体");
	outtextxy(80,30,"游戏规则");
	settextstyle(23,0,"方正舒体");
	outtextxy(10,110,"1.由键盘上1 2 3 4数字控制游戏 ");
	outtextxy(10,150,"2.进入游戏界面后等待3秒开始游戏");
	outtextxy(10,190,"3.如果按错就会结束游戏并统计得分");
	outtextxy(10,230,"4.游戏会记录你最佳得分并显示");

	settextstyle(48,0,"方正舒体");
	outtextxy(100,400,"返回菜单");

	MOUSEMSG s;
	while(true)
	{
		s=GetMouseMsg();
		if(s.uMsg==WM_LBUTTONDOWN)
		{
			if(s.x>100&&s.x<300&&s.y>400&&s.y<450)
			{
				cleardevice();
				this->startgraph();
			}
		}
	}

}

void Play::endgraph()
{
    setbkcolor(RGB(64,0,64));
	cleardevice();

	char A[20];
	char B[20];
    int t;
	settextcolor(RGB(255,0,128));
	settextstyle(60,0,"方正舒体");
	outtextxy(50,60,"最好成绩:");
	sprintf(A,"%d",max);
	sprintf(B,"%d",sum);
	t=textwidth("A");
	outtextxy((400-t)/2,130,A);
	
	t=textwidth("本次成绩:");
	outtextxy(50,230,"本次成绩:");
	t=textwidth("B");
	outtextxy((400-t)/2,300,B);
	settextstyle(30,0,"方正舒体");
	outtextxy(20,400,"按任意键重新开始游戏");
    getch();
	
}


void Play::dispaly()
	{
    setbkcolor(WHITE);
	cleardevice();
	
	for(i=0;i<=4;i++)
	{
		setlinecolor(BLACK);
		setlinestyle(PS_SOLID| PS_ENDCAP_FLAT, 3);
		line(100*i,0,100*i,500);
		line(0,100*i,400,100*i);
	}
	line(0,500,400,500);
	setfillcolor(BROWN);
	fillrectangle(0,400,400,500);
	setbkmode(TRANSPARENT);
	settextcolor(BLUE);
	settextstyle(40, 0, "方正舒体");
	outtextxy(40,460,"1");
	outtextxy(140,460,"2");
	outtextxy(240,460,"3");
	outtextxy(340,460,"4");
	setfillcolor(BLACK);
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		{
			if(x[i][j]==1)
				fillrectangle(100*i,100*j,100*(i+1),100*(j+1));
		}
    
	
   
		
}

void Play::push()  //将界面向下推动
{
for(i=3;i>=0;i--)
		{
			for(j=3;j>=0;j--)
			{
				if(x[i][j]==1)
				{
					
					x[i][j+1]=x[i][j];
					x[i][j]=0;
				
				}
				
			}
		}


}
void Play::suiji()  //生成随机数
{
	i=rand()%4;
	x[i][0]=1;
	
	
}


int Play::one()
{
	if(x[0][3]==0)
	{
		return 0;
	}

	if(x[0][3]==1)                        
	{
        x[0][3]=0;
		this->push();
		return 1;

	}
}

int Play::two()
{
	if(x[1][3]==0)
	{
		return 0;
	}

	if(x[1][3]==1)
	{
        x[1][3]=0;
		this->push();
		return 1;
	}
}
		
int Play::three()
{
	if(x[2][3]==0)
	{
		return 0;
	}

	if(x[2][3]==1)
	{
		x[2][3]=0;
		this->push();
		return 1;
	}
}

int Play::four()
{
	if(x[3][3]==0)
	{
		return 0;
	}

	if(x[3][3]==1)
	{
		x[3][3]=0;
		this->push();

		return 1;
	}
}

void Play::playgame()
{
     
	this->dispaly();
	this->jishi();
	
		
		
	        char h;
           h=getch();
	   if(h!=1&&h!=2&&h!=3&&h!=4)
	   {
		   p=0;
	   }
	   if(h=='1')
	   {
		   p=this->one();
		   
	   }

	   if(h=='2')
	   {
		   p=this->two();
	   }
	   
	   if(h=='3')
	   {
		   p=this->three();
	   }
       
	   if(h=='4')
	   {
		   p=this->four();
	   }


	   if(p==1)
	   {
		   this->suiji();
		   sum++;
	   }
       
       this->dispaly();
       
	   if(sum>=max)
	   {
		   max=sum;
	   }
	   
	if(p!=1)
	   {
		   
		   this->endgraph();
		   cleardevice();
		   sum=0;
		   s=3;
		   Play::startgraph();
	   }
}


void Play::work()
{   
     cleardevice();
	srand(time(0));
     p=1;

    
 while(p==1)
   {
   
         
	
	this->playgame();

   }
	

}

void Play::jishi()
{
	char C[20];
	while(s>0)
	{
	Sleep(1000);
	  s--;
    setfillcolor(RGB(0,128,128));
    fillrectangle(120, 410, 280, 450);
    
	settextstyle(30,0,"方正舒体");
	setbkmode(TRANSPARENT);
	outtextxy(140, 418, "倒计时:");
    settextcolor(RGB(0,0,0));
	settextstyle(30,0,"方正舒体");
	setbkmode(TRANSPARENT);
	sprintf(C,"%d",s);
	outtextxy(242,418,C);

    
	}

	
}
    
	   







