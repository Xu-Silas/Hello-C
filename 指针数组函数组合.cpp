#include<bits/stdc++.h>
using namespace std;

//指针+数组+函数

//冒泡排序函数
    void bubblesort(int* arr,int length) 
    {
    	for(int i = 0; i < length - 1; i++)
    	{
    		for(int j = 0; j < length - i -1; j++)
    		{
    			if(arr[j] > arr[j+1])
    			{
    				int temp = arr[j];
    				arr[j] = arr[j+1];
    				arr[j+1] = temp;
				}
			}
		}
	}
//打印数组函数
    void printarr(int *arr,int length)
	{
		for(int i = 0; i<length; i++)
		{
			cout << arr[i] << endl;
		}
	} 
int main()
{
	//利用冒泡排序升序排列
	
	//1.创建数组 
	int arr[10] = { 4,6,9,1,2,10,8,7,5 } ;
	int length = sizeof(arr)/sizeof(arr[0]);
	//2.创建冒泡排序函数
	//见上 
	//3.打印排序后数组 
	bubblesort(arr,length);
	printarr(arr,length);
}
