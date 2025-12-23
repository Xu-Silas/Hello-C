#include<bits/stdc++.h>
using namespace std;

struct student
{   
	string name;
    int score;
    int age;
};
//打印学生信息函数
//值传递 
void printstudent1(student s)
{
	s.age=100;
	cout<<s.name<<" "<<s.score<<" "<<s.age<<endl;
} 
//地址传递
void printstudent2(student* s)
{   
    s->age=101;
	cout<<s->name<<" "<<s->score<<" "<<s->age<<endl;
} 
//结构体作为函数的参数
int main(){
	student s={"李四",95,19};
	printstudent1(s);
	cout<<s.age<<endl;//值传递函数不改变实参 
	printstudent2(&s);
	cout<<s.age<<endl;//地址传递改变实参 
} 
