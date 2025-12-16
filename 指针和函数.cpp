#include<bits/stdc++.h>
using namespace std;

//交换数字函数
int swap01(int num1,int num2) 
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << " " << num2 <<endl;
}
int swap02(int* p1,int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//指针和函数 
int main()
{
	//1.值传递(复习) 
	 int a = 10;
	 int b = 20;
	 swap01(a,b);
	 cout << a << " " << b << endl;
	 
	//2.地址传递(可以修饰实参) 
	 swap02(&a,&b);
	 cout << a << " " << b << endl;
}
