#include<bits/stdc++.h>
using namespace std;

int& test01()
{
	int a = 10;
	return a;//不能返回局部变量的引用 
}

int& test02()
{
    static int a = 10;//静态变量并不会被释放 
    return a;
}

int main()
{
	int &ref1 = test01();
	cout << "a = " << ref1 << endl;
	cout << "a = " << ref1 << endl;//非法操作 
	
	int &ref2 = test02();
	cout << "a = " << ref2 << endl;
	
	test02() = 1000;//返回值为a的引用，相当于直接对a操作（引用的返回值可以作为左值）cout << "a = " << ref1 << endl; 
	 
	cout << "a = " << ref2 << endl;
}
