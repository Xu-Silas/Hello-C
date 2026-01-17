#include<bits/stdc++.h>
using namespace std;

/*条件：
1.同一作用域下(全局...) 
2.函数名相同
3.函数参数类型不同/个数不同/顺序不同 
*/

void func(int a)
{
	cout << "func的调用1" << endl;
}

void func(double a)
{
	cout << "func的调用2" << endl;
}

void func()
{
	cout << "func的调用3" << endl;
}

void func(int a, double b)
{
	cout << "func的调用4" << endl;
}

void func(double a, int b)
{
	cout << "func的调用5" << endl;
}

int main()
{
	func(10);
	func(3.14);
	func();
	func(10,3.14);
	func(3.14,10);
	//函数参数不一样，系统根据传入的参数会自己正确去调用 (返回值不能作为重载的条件) 
}
