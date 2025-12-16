#include<bits/stdc++.h>
using namespace std;

int main()
{
	//1.定义指针
	int a = 10;
	//指针定义的语法 ：数据类型  * 指针变量名 
	int * p;
	//让指针记录变量a的地址
	p=&a;
	cout << "a的地址为 ：" << &a << endl;
	cout << "指针p为 ：" << p << endl; 
	
	//2.使用指针 
	//通过解引用找到指针指向的内存
	//指针前加*代表解引用，找到指针指向内存中的数据
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	
	//3.指针所占内存空间
	//在32位操作系统下，4byte;在64位操作系统下，8byte;(无论什么数据类型)
	int a1 = 20;
	int * p1 = &a;
	cout << sizeof(p1) << endl;
	
	//4.空指针(指向0编号内存空间) 
	//用于给指针变量初始化
	int *p2 = NULL;
	//空指针不可进行访问(0-255的内存编号被系统占用) 
	//*p2 = 100; 
	//cout << *p2 <<endl;
	
	//5.野指针(指向非法内存空间,是一种错误，需要避免) 
	//int *p3 = (int *)0x1100;
	//cout << *p3 << endl;
	
	//6.const修饰指针
	
	//修饰指针---常量指针(指针指向可以改，指向的值不可以改) 
	int c = 5;
	const int *p4 = &c;
	//*p4 = 20(不对)
	p4 = &a;
	cout << *p4<<endl;
	
	//修饰常量---指针常量(指针指向的值可以改，指向不可以改) 
	int * const p5 = &c;
	//p5 = &a(不对)
	*p5 = 10;
	cout << *p5;
	
	//const既修饰指针，又修饰常量 (都不能改) 
	const int * const p6 = &c; 
}
