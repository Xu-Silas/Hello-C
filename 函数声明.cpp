#include<bits/stdc++.h>
using namespace std;
//º¯ÊıµÄÉùÃ÷ 

void swap(int num1,int num2);

int main()
{
	swap(1,2);
}

void swap(int num1,int num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<num1<<endl;
	cout<<num2<<endl;
}
