#include<bits/stdc++.h>
using namespace std;

//二维数组 
int main()
{
	int arr[2][3];
	arr[0][0]=1;
	arr[0][1]=2;
	arr[0][2]=3;
	arr[1][0]=4;
	arr[1][1]=5;
	arr[1][2]=6;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	int arr2[2][3]=
	{
		{1,2,3},
		{4,5,6}
    };
    for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	int arr3[2][3]={1,2,3,4,5,6};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	int arr4[][3]={1,2,3,4,5,6};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr4[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	int arr0[2][3]=
	{
		{1,2,3},
		{4,5,6}
	};
	cout<<"二维数组占用的内存空间为："<<sizeof(arr0)<<endl;
	cout<<"二维数组第一行占用的内存空间为："<<sizeof(arr0[0])<<endl;
	cout<<"二维数组第一个元素占用的内存空间为："<<sizeof(arr0[0][0])<<endl;
	cout<<"二维数组的行数为："<<sizeof(arr0)/sizeof(arr0[0])<<endl;
	cout<<"二维数组的列数为："<<sizeof(arr0[0])/sizeof(arr0[0][0])<<endl;
	
	cout<<"二维数组的首地址为："<<(long long)arr0<<endl;
	cout<<"二维数组的第一行首地址为："<<(long long)arr0[0]<<endl;
	cout<<"二维数组的第二行首地址为："<<(long long)arr0[1]<<endl;
	//第二行与第一行首地址差12，因为第一行开头距离第二行开头有三个数
	cout <<"二维数组的第一个元素首地址为："<<(long long)&arr0[0][0]<<endl;
	cout <<"二维数组的第二个元素首地址为："<<(long long)&arr0[0][1]<<endl;
	//第二个与第一个首地址差4，因为第一个元素开头距离第二个元素开头有一个数
	
	
	//practice:考试成绩统计
	int arr1[3][3]=
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
		
	};
	
	string names[3]={"张三","李四","王五"}; 
	
	for(int i=0;i<3;i++)
	{
		int sum=0;
		for(int j=0;j<3;j++)
		{
			sum=sum+arr1[i][j];
			cout<<arr1[i][j]<<"\t";
	    }
		cout<<names[i]<<"的总分为："<<sum<<endl;
	}
}

