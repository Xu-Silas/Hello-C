#include<bits/stdc++.h>
using namespace std;

void Swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap01 a = " << a << endl;
	cout << "Swap01 b = " << b << endl;
}

void Swap02(int* a,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Swap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	Swap03(a,b);
	cout << "Swap03 a = " << a << endl;
	cout << "Swap03 b = " << b << endl;//引用传递，形参可以修饰实参 
	Swap01(a,b);//形参改变了 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;//只是值传递，形参并不修饰实参 
	Swap02(&a,&b);
	cout << "Swap02 a = " << a << endl;
	cout << "Swap02 b = " << b << endl;//地址传递，形参可以修饰实参 
}
