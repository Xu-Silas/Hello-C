#include<bits/stdc++.h>
using namespace std;
#define day 7

int main(){
	//整形 
	cout<<day<<endl;
	const int a=7;
	long long b=6;//long long中间有空格！ 
	cout<<sizeof(a)<<" "<<sizeof(b)<<endl;
	//实型 （浮点型） 
	float m=3.14159265;//单精度 
	double n=3.1415926535;//双精度 
	cout<<m<<" "<<n<<endl;
	cout<<sizeof(m)<<" "<<sizeof(n)<<endl;
	//字符型 
	char ch='a';
	cout<<ch<<" "<<(int)ch<<" "<<sizeof(ch)<<endl;
	char x=ch-'0';
	int y=ch+'0';
	cout<<x<<" "<<y<<endl;
	//转义字符
	cout<<"hello world\n";//换行 
	cout<<"\\"<<endl;//若输出一个反斜杠会报错，两个"\"才能输出一个"\",第一个"\"用于告诉系统要输入特殊符号；
	cout<<"aaaa\thelloworld"<<endl;//水平制表符，多行输出整齐，因为/t前固定占八个字符，不足八个给你补空格； 
    cout<<"aa\thelloworld"<<endl;
    cout<<"aaa\thelloworld"<<endl;
    //字符串
    char str[]="hello world";//c语言
	string str1="hello world";//c++
	cout<<str<<" "<<str1<<endl; 
	//布尔类型
	bool flag=true;
	cout<<flag<<endl;
	flag=false;
	cout<<flag<<" "<<sizeof(flag)<<"\n";
	//输入
	 int p=0;
	 cout<<"请给整形p赋值"<<endl;
	 cin>>p;
	 cout<<p<<endl;
	 float f=3.14f;
	 cout<<"请给浮点数f赋值"<<endl; 
	 cin>>f;
	 cout<<f<<endl;
	 char ch2='a';
	 cout<<"请给字符型ch2赋值"<<endl;
	 cin>>ch2;
	 cout<<ch2;
}
