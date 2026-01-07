#include<bits/stdc++.h>
using namespace std;


//1.new的基本语法
int* func()
{
	//在堆区创建一个整形数据
	int* p = new int(10);//返回的是该数据的地址 
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区数据，由程序员开辟和释放
	//释放堆区数据，要用delete关键字 
	delete p;
	cout << *p << endl;//报错，该内存已释放，再操作则非法 
}
//2.堆区用new开辟数组
void test02()
{
	int* arr = new int[10];//10代表数组有10个元素
	for(int i = 0;i < 10;i++)
	{
		arr[i] = i + 100;//给十个元素赋值 
	} 
	for(int i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;//加中括号代表释放的是数组 
}

int main()
{ 
    test01();
    test02();
}
