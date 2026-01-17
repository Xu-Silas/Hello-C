#include<bits/stdc++.h>
using namespace std;
//成员属性设置为私有
//1.可以控制读写权限
//2.可以检测数据有效性

class Person
{
public:
	
	//设置姓名
	void setname(string setname)
	{
		Name = setname;
	} 
	string getname()
	{
		return Name;
	}
	
	//读取年龄
	int getage()
	{
		return Age;
	} 
	//设置年龄（0-150） 
	void setage(int setage)
	{
		if(setage<0||setage>150)
		{
			cout << "年龄输入有误，赋值失败" << endl;
		}
		else
		{
			Age = setage;
		}
	}
	
	//设置偶像
	void setIdol(string setidol)
	{
		Idol = setidol;
	} 
	
	
private:
	string Name; //可读可写 
	int Age = 18; //只读
	string Idol; //只写 
};
int main()
{
	Person p;
	
	p.setname("张三");
	cout << "该人的姓名为：" << p.getname() << endl;//可读可写 
	
	cout << "该人的年龄为：" << p.getage() << endl;//只读 
	
	p.setIdol("偶像");//只写 
	
	p.setage(160);//限制对成员属性的赋值范围
	cout << "该人的年龄为：" << p.getage() << endl;//年龄不会改变 
} 
