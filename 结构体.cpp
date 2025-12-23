#include<bits/stdc++.h>
using namespace std;

//结构体 定义 
//1.创建学生的数据类型 
struct student
	{
		//成员列表
		string name;
		int age;
		double score; 
	}s3;//顺便创造结构体变量 
int main(){
	//2.通过该类型创建具体学生（创建结结构体变量） 
//a.struct student s1
    struct/*创建变量时，struct可以不写*/ student s1;
    s1.name="Zhang_san";
    s1.age=18;
    s1.score=100;
    cout<<s1.name<<" "<<s1.age<<" "<<s1.score<<endl;
//b.struct student s2={...}
    student s2={"李四",19,95};
    cout<<s2.name<<" "<<s2.age<<" "<<s2.score<<endl;
//c.定义结构体时顺便创造结构体变量 
	 s3.name="王五";
	 s3.age=35;
	 s3.score=80; 
	 cout<<s3.name<<" "<<s3.age<<" "<<s3.score<<endl;
}
