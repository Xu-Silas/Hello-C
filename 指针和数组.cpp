#include<bits/stdc++.h>
using namespace std;

//指针和数组 
int main()
{
	//利用指针访问数组中的元素 
	
	//访问第一个元素 
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = arr;//arr为数组的首地址 
	cout << *p << endl;
	
	//访问第二个元素 
	p++; //让指针向后偏移四个字节 
	cout << *p << endl;
	
	//利用指针遍历数组
	int *p2 = arr;
	for(int i=0; i<10; i++)
	{
		cout << *p2 << endl;
		p2++;
	} 
}
