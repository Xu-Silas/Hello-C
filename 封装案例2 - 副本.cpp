#include<bits/stdc++.h>
using namespace std;

//点和圆位置关系的判断
 
//点类
class Point
{
private:
	int m_X;
	int m_Y;
	
public:
	void setX(int setx)
	{
		m_X = setx;
	}
	int getX()
	{
		return m_X;
	}
	void setY(int sety)
	{
		m_Y = sety;
	}
	int getY()
	{
		return m_Y;
	}
};

//圆类 
class Circle
{
private:
	int m_R;
	Point m_Center;
	
public:
	void setR(int r)
	{
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}
	
	void setCenter(Point center)
	{
		m_Center = center;
	}
	Point getCenter()//在一个类中可以让另一个类作为成员属性 
	{
		return m_Center;
	}
	
}; 

//判断点和圆的关系
void isInCircle(Circle &c,Point &p)
{
	int Square1 = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int Square2 = c.getR()*c.getR();
	
	if(Square1 == Square2)
	{
		cout << "点在圆上" << endl;
	}
	else if(Square1 > Square2)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" <<endl;
	}
}
 
int main()
{
	Circle c;
	c.setR(1);
	
	Point Circlecenter;
	Circlecenter.setX(0);
	Circlecenter.setY(0);
	
	c.setCenter(Circlecenter);
	
	Point p;
	p.setX(2);
	p.setY(2);
	
	isInCircle(c,p);
}
