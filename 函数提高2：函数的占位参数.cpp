#include<bits/stdc++.h>
using namespace std;

void func(int a, int //= 10; /*占位参数（可以有默认参数）*/)
{
	cout << "This is func." << endl;
}
int main()
{
	func(10, 10/*必须传入占位参数*/);
}
