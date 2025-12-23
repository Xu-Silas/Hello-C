#include<bits/stdc++.h>
using namespace std;

//结构体指针
struct student
{
	string name;
	int age;
	int score;
} ;
int main()
{
	student s1={"张三",20,60};
	//通过指针指向结构体变量
	student* p=&s1;
	//通过指针访问结构体变量中的数据
	cout<<p-> name<<" "<<p-> age<<" "<<p-> score<<endl;
}
