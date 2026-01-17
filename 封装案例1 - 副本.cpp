#include<bits/stdc++.h>
using namespace std;

class Cube
{
private:
	int L;
	int W;
	int H;
    
public:
	//设置 
	void setL(int setL)
	{
		L = setL;
	}
	void setW(int setW)
	{
		W = setW;
	}
	void setH(int setH)
	{
		H = setH;
	}
	
	//获取
	int getL()
	{
		return L;
	} 
	int getW()
	{
		return W;
	} 
	int getH()
	{
		return H;
	} 
	
	int getVolume()
	{
		return L*W*H;
	}
	int getSquare()
	{
		return 2*(L*H+L*W+W*H);
	}
	
	//利用成员函数判断两个立方体是否相等 
	bool isSameClass(Cube &c)
	{
		if(L == c.getL() && W == c.getW() && H == c.getH())
		{
			return true;
	    }
	    else
	    {
	    	return false;
		}
		
	}
	
};

//1.利用全局函数，判断两个立方体是否相同
bool isSame(Cube &c1,Cube&c2)
{
	if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Cube C1;
	C1.setL(10);
	C1.setW(10);
	C1.setH(10);
	
	cout << "C1的面积为：" << C1.getSquare() << endl;
	cout << "C1的体积为：" << C1.getVolume() << endl;
	
	
	Cube C2;
	C2.setL(10);
	C2.setW(10);
	C2.setH(10);
	
	//利用全局函数判断是否相同 
	bool ret01 = isSame(C1,C2);
	if(ret01)
	{
		cout << "c1和c2相同" << endl;
	}
	else
	{
		cout << "c1和c2不相同" << endl;
	}
	
	//利用成员函数判断是否相同 
	bool ret02 = C1.isSameClass(C2);
	if(ret02)
	{
		cout << "c1和c2相同" << endl;
	}
	else
	{
		cout << "c1和c2不相同" << endl;
	}
}
