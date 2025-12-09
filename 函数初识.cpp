#include<iostream>
using namespace std;

    //函数
    
//1.函数格式:返回值类型 名称 参数 函数体 返回值 
int add(int num1,int num2)
//函数定义时num1,num2为形式参数（形参） 
{
	int sum=num1+num2;
	return sum;
}   

//2.函数的调用 
/*int main()
{
	int a=1;
	int b=2;
	int c=add(a,b);//在main中调用add 
//函数调用时a,b称为实际参数（实参） 
//调用函数时，实参的值会传递给形参 
	cout<<c;
}*/

//3.值传递
//定义函数：交换两个数字

//若函数不需要返回值，声明时可以写void
void swap(int num1,int num2)
{
	cout<<"交换前："<<endl;
	cout<<num1<<endl;
	cout<<num2<<endl;
	
	int temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"交换后："<<endl;
	cout<<num1<<endl;
	cout<<num2<<endl;
	//无返回值不写return 
}

int main()
{
	int a=1;
	int b=2;
	cout<<a<<" "<<b<<endl;
    swap(a,b);//函数里本身包含输出语句，不需要再cout
	//形参发生改变不会改变实参 
	cout<<a<<" "<<b<<endl;
}

