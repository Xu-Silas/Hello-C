#include<bits/stdc++.h>
using namespace std;

//数组 
int main()
{
	//五只小猪称体重 
	int arr[5]={100,300,500,400,200};
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>=max)
		{
			max=arr[i];
		}
	}
	cout<<max<<endl; 
	//元素逆置
	int arr1[5]={1,3,2,5,4};
	int start=0;
	int end=sizeof(arr1)/sizeof(arr1[0])-1;
	int temp=0;
	while(start<end)
	{
	temp=arr1[start];
	arr1[start]=arr1[end];
	arr1[end]=temp; 
	start++;
	end--;
    }
    for(int i=0;i<5;i++)
    {
    	cout<<arr1[i]<<endl;
	}
	//冒泡排序
	int arr2[9]={1,3,2,0,4,7,6,8,5};
	for(int i=0;i<9-1;i++)
	{
		for(int m=0;m<9-i-1;m++)
		{
			if(arr2[m]>arr2[m+1])
			{
			int temp=arr2[m];
			arr2[m]=arr2[m+1];
			arr2[m+1]=temp;
		    }
		}
	}
    for(int i=0;i<9;i++)
    {
    	cout<<arr2[i]<<endl;
	}
}

