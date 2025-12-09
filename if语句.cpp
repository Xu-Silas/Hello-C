#include<bits/stdc++.h>
using namespace std;
//程序流程结构
 
int main(){
	/*1.顺序结构（无跳转）
      2.选择结构（条件满足后往后执行）
	  3.循环结构（条件满足后多次循环执行）*/
	  
    //选择结构 
    //1.if语句 ：单行/多行/多条件
	int score=0;
	cout<<"请输入分数: "<<endl;
	cin>>score;
	cout<<"您输入的分数为："<<score<<endl;
	if(score>600) //这里别加分号！ 
	{
		cout<<"恭喜你，666！"<<endl; 
			if(score>700)
		{
			cout<<"6666"<<endl;
		}
		    else if(score>650)
		{
			cout<<"666"<<endl;
		}
		    else
		{
			cout<<"6"<<endl;
		}
		
	}
	//多行if语句 
	/*else//score<=600
	{
		cout<<"不行啊，233..."<<endl;
	}*/  
	
	//多条件if语句
	/*else if(score>500) 
	{
		cout<<"恭喜你，66！"<<endl; 
	}
	else if(score>400)
	{
		cout<<"恭喜你，6！"<<endl; 
	}
	else
    {
    	cout<<"gg"<<endl;
	}*/ 
	
    //按顺序往下判断是否满足条件，输入601，在第一个条件下就满足，直接输出结果，不再考虑其他条件
	//嵌套if语句
	 else if(score>500) 
	{
		cout<<"恭喜你，66！"<<endl; 
	}
	else if(score>400)
	{
		cout<<"恭喜你，6！"<<endl; 
	}
	else
    {
    	cout<<"gg"<<endl;
	}
	//practice1三只小猪谁最重 
	int num1=0,num2=0,num3=0;
	cout<<"请输入三只小猪的重量"<<endl; 
	cin>>num1>>num2>>num3;
	if(num1>num2)
	{
		if(num1>num3)
		{
			cout<<"1号最重"<<endl;
		}
		else
		{
			cout<<"3号最重"<<endl;
		}
	}
	else if(num2>num3)
		{
			cout<<"2号最重"<<endl;
		}
		else
		{
			cout<<"3号最重"<<endl; 
		}
	}


