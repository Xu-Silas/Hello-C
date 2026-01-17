#include<bits/stdc++.h>
using namespace std;

//结构体中的const 
struct student
{   
	string name;
    int score;
    int age;
};
void printstudent(const student* s)//加入const后指针s指向的结构体变量就无法修改，可防止误操作 
{
	cout<<s->name<<" "<<s->score<<" "<<s->age<<endl;
}
int main()
{
	student s={"李四",95,19};
	printstudent(&s);//用地址传递，可避免因值传递大量拷贝而造成的内存占用，一个地址只占四个字节内存，但会同时改变实参和形参 
}
