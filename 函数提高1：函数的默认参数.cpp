#include<bits/stdc++.h>
using namespace std;

int func01(int a = 10, int b = 20, int c = 30)//直接给参数赋上默认值 
{
	return a + b + c;
}


/*int func02(int a = 10, int b, int c = 30)//若一个参数为默认参数，它后面也必须都为默认参数 
{
	return a + b + c;
}*/

/*函数声明和实现只能有一个有默认参数 
int func03(int a = 10, int b = 20);//声明 

int func03(int a = 10, int b = 20);//实现，报错（可能出现二义性） 
{
	return a + b;
} */

int main()
{
	cout << func01(30, 30) << endl;//输出为90，两个30分别赋值给a和b，c用默认值30
	//优先用传入的数据，若没有则用默认值 
}
