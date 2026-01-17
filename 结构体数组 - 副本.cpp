#include<bits/stdc++.h>
using namespace std;

//结构体数组
//1.定义一个结构体
struct student
{
	string name;
	int age;
	int score;
};
//2.创建结构体数组
int main(){
	struct student stuArray[3]=
	{
		{"zhangsan",18,60},
		{"lisi",20,85},
		{"wangwu",30,90}
	};
//3.赋值
    stuArray[2].name="zhaoliu";
    stuArray[2].age=60;
//4.遍历 
    for(int i=0;i<3;i++)
    {
    	cout<<stuArray[i].name<<" "<<stuArray[i].age<<" "<<stuArray[i].score<<endl;
	}
}
