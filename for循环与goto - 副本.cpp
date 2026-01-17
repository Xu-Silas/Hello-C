#include<iostream>
using namespace std;

int main(){
	//for循环
	/*for(int i=0;i<10;i++)//从0检索到9 ,循环10次 
	{
		cout<<i<<endl;
	} 
	
	int i1=0;
	for(;;)
	{
		if(i1<10)
		{
			cout<<i1<<endl;
			i1++;
		}
	}*/
	
	//嵌套for循环
	for(int i2=0;i2<10;i2++)//行数 ，外循环执行一次，内循环执行一轮 
	{
		for(int j=0;j<10;j++)//每行有多少列 
		{
			cout<<"* ";
		}
		cout<<endl;
	} 
	
	//practice:打印乘法口诀表
	for(int a=1;a<=9;a++)
	{
		for(int b=1;b<=a;b++)
		{
			cout<<b<<"*"<<a<<"="<<b*a<<"\t";
	    }
	    cout<<endl;
	} 
	
	//break&continue
	for(int m=0;m<=100;m++)
	{
		if(m%2==0)
		{
			continue;//如果m为偶数，跳过下面内容，重新开始循环。若换为break则直接跳出循环 
		}
		cout<<m<<endl;
	}
	
	//goto(不推荐使用）
	cout<<"1"<<endl; 
	goto FLAG;
	cout<<"2"<<endl; 
	cout<<"3"<<endl; 
	cout<<"4"<<endl; 
	FLAG:
	cout<<"5"<<endl; 

}

