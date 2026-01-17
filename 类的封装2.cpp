#include<bits/stdc++.h>
using namespace std;

//三个权限
//公共权限 public      成员类内类外均可访问
//保护权限 protected   成员仅类内可以访问 （儿子可以访问父亲保护的内容） 
//私有权限 private     成员仅类内可以访问 （儿子无法访问父亲私有的内容） 

class Person
{
public:
	string name;
protected:
	string car;
private:
	int password;
	
public:
	void func()
	{
		name = "张三";
		car = "拖拉机";
		password = 123456;
	}

};

int main()
{
	Person p1;
	p1.name = "李四";
	//p1.car = "奔驰"; 
	//p1.password = 54321;
	p1.func();//func作为成员函数是公共权限，可以访问，从而该类中的成员属性都是在类内赋值的 
	//无法访问，一个被保护，一个是私有 
}
