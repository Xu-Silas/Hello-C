#include<bits/stdc++.h>
using namespace std;

int main(){
     //运算
     //1.除法 
	 //两整数相除为整数 
	 double o=1.1;
	 double i=3.4;	
	 cout<<o/i<<endl;//小数相除可以输出小数 
	 
     //2.取模 
	 int c=10;
	 int d=3;
	 int m=c%d;
	 int n=c%11;
	 cout<<m<<" "<<n<<endl;
	 //两小数不可以取模 ,取模数（%后面的）不能为0 
	 
	 //3.递增递减
	 //前置
	  int a=10;
	  ++a;
	  cout<<a<<endl;//先+1，再运算表达式 
	 //后置
	  int b=10;
	  b++;
	  cout<<b<<endl;//先运算表达式，再+1 
	 //区别
	  int a2=10;
	  int b2=++a2*10; 
	  cout<<a2<<" "<<b2<<endl;
	  int a3=10;
	  int b3=a3++*10;
	  cout<<a3<<" "<<b3<<endl;
	 //赋值运算符
	   int a4=0;
	   a4+=2;//把加到自己身上,a=a+2
	   cout<<a4<<endl;
	   //*/%一样 
	   
	 //4.比较运算符
	 //==,>,<,>=,<=,!= 
       int a5=1,b5=2;
	   cout<<(a5==b5)<<" "<<(a5!=b5)<<" "<<(a5>b5)<<endl;//返回值为0（假）/1（真） 
	   
	 //5.逻辑运算符
	 //!(非）&&(与)||(或) 
	  int r=10;
	  cout<<!r<<" "<<!!r<<" "<<!!!r<<endl;//非零数都为真
	  
	  int a6=1,b6=2;
	  cout<<(a6&&b6)<<endl;
	  a6--;
	  cout<<(a6&&b6)<<endl;//同真为真，其余为假 
	  b6-=2; 
	  cout<<(a6||b6)<<endl;
	  a6++;
	  cout<<(a6||b6)<<endl;//有真则真 
}
