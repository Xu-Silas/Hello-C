#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a = 10;
	int &b = a;//必须初始化 
	cout << "a = " << b << endl;
	b = 20;
	cout << "a = " << b << endl;
	int c = 30;
	//int &b = c; 错误，别名不能改变对象 
	b = c;//给别名赋值，直接更改内存，a，b均改变 
	cout << "a = " << b << endl;
}
