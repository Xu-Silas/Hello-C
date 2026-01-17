#include<bits/stdc++.h>
using namespace std;

//1.是否为常量引用作为重载条件
void func01(int &a)
{
	cout << "func01的调用1" << endl;
}

void func01(const int &a)
{
	cout << "func01的调用2" << endl;
}


//2.函数重载碰到默认参数 
/*void func02(int a)
{
	cout << "func02的调用1" << endl;
}

void func02(int b = 10)
{
	cout << "func02的调用2" << endl;
}*/


int main()
{
	int a = 10;
	func01(a);//优先调用无const的函数 
	func01(10);//传入10,调用1不合法，引用不能直接给值，调用2合法，系统修改代码为int temp = 10; const int &a = temp;
	//func02(10); 两个func02都可以调用，有二义性，错误 
}
