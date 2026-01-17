#include<bits/stdc++.h>
using namespace std;

    //函数的样式
//1.无参无返
void test01()
{
	cout<<"this is test01"<<endl;
}
//2.有参有返
int test02(int a0)
{
    cout<<"this is test02"<<endl;
	return a0;	
} 
//3.无参有返
int test03()
{
    cout<<"this is test03"<<endl;
	return 1000;	
} 
//4.有参无返
void test04(int a2)
{
	cout<<"this is test04 = "<<a2<<endl;
	
} 
int main()
{
	test01();
	
	int a0=test02(10);
	cout<<a0<<endl; 
	
	int a1=test03();
	cout<<a1<<endl;
	
	test04(1000);
}
     //函数的声明
int swap(int num1,int num2)


int swap(int num1,int num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<num1<<endl;
	cout<<num2<<endl;
}
