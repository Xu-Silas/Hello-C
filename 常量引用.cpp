#include<bits/stdc++.h>
using namespace std;


void showValue( int &val)//形参前可以加个const（常量引用）,防止参数被修改 
{
	val = 1000;
	cout << "val = " << val <<endl;
}
int main()
{
	//int a = 10;
	//int &ref = a;  //把a换成10，不对，必须引用合法内存空间 
	//const int &ref = 10;
	//编译器会自动改为 int temp = 10; const int &ref = temp; 
	int a = 100;
	showValue(a);
	cout << "a = " << a;//引用做形参，实参也被更改 
}
