#include<iostream>
using namespace std;
class Point;
Point operator +(const Point &p1, const Point &p2);


class Point
{
public:
	Point(int x=0,int y=0):x(x),y(y)
	{
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}
    void shuchu();
	
friend Point operator +(const Point &p1, const Point &p2);


private:
	int x;
	int y;
};

void Point::shuchu()
{
	printf("x=%d,y=%d\n",x,y);
}


    Point operator +(const Point &p1, const Point &p2)
  {
	  return Point(p1.x+p2.x,p1.y+p2.y);
  }

  int main()
  {
	  Point c3;
	  Point c1(1,5);
	  Point c2(3,4);

	  c3=c1+c2;
	 c3.shuchu();

	  return 0;
  }

	 
