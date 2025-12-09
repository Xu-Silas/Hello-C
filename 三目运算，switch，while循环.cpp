#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main(){
	//三目运算符
	int a=1,b=2,c=3;
	c=(a>b?a:b);//后面运算结果返回的b,将b赋值给c 
	//条件？返回结果1：返回结果2。 本质：a若大于b，将a赋值给c，反之将b赋值给c 
	cout<<c<<endl; //条件真，输出1；条件假，输出2 
	(a>b?a:b)=100;//前面一坨返回为b，本质是给b赋值为100，并不影响c 
	cout<<a<<endl;
	cout<<b<<" "<<c<<endl;
	
	//选择结构 switch
	cout<<"请给电影打分"<<endl;
	int score=0;
	cin>>score;
	switch(score) 
	{
		case 5:
			cout<<"神片"<<endl;
			break;//若无break会一直向下执行 
		case 4:
		    cout<<"好片"<<endl; 
		    break;
		case 3:
			cout<<"一般"<<endl;
			break;
		default:
		    cout<<"垃圾"<<endl; }
		/*if和switch区别 ：
		switch判断条件只能是整形或者字符型，不能为区间，但结构清晰，执行效率高*/ 
		
		//while循环语句
		int num=0;
	    while(num<10)
	    {
	    	cout<<num<<endl; 
	    	num++;
		}
		//practice1: 猜数字(1~100)
		srand((unsigned int)time(NULL));//添加随机数种子 
		int num0=rand()%100+1;
		//系统在0+1~99+1之间随机生成一个数,但想保证随机数每次不同，需要添加随机数种子。 
		cout<<"请输入猜想的数值"<<endl;
		int guess=0;
		while(1)
		{
			cin>>guess;
			if(guess>num)
			{
				cout<<"猜大了"<<endl;
			}
			else if(guess<num)
			{
				cout<<"猜小了"<<endl;
			}
			else
			{
				cout<<"猜对了"<<endl;
				break;
			}
		}
		//do while循环语句
		//与while区别：先执行一次，再判断条件
		int num1=0;
		do
		{
			cout<<num1<<endl;
			num1++;
		 } 
		while(num1<10);
		//practice2:水仙花数
		int num2=100;
		while (num2<1000)
		{
			
			int a0=num2%10;
			int b0=num2/10%10;
			int c0=num2/100;
			if(a0*a0*a0+b0*b0*b0+c0*c0*c0==num2)
			{
				cout<<num2<<endl;
			}
			num2++;
		}
	}


