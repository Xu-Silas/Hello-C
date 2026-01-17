#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a = 10;
	int &ref = a;//相当于写了一个int* const ref = &a.为指针常量，指向不可以改变 
	ref = 20;//内部发现是引用，直接转化为*ref = 20 
	
	//引用的本质就是指针常量 ，每次用，编译器都会自动解引用 
}
