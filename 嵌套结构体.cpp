#include<bits/stdc++.h>
using namespace std;

//嵌套结构体
struct student
{
	string name;
    int score;
    int age;
};
struct teacher
{
    string name;
	int id;
	int age;
	student stu;
} ;

int main()
{
	teacher t;
	t.name="老王";
	t.id=114514;
	t.age=48;
	t.stu.name="小明";
	t.stu.age=18;
	t.stu.score=80;
	return 0;
}
