#include<bits/stdc++.h>
using namespace std;

/*自己尝试：
class Student
{
	//访问权限 
public:
	//属性 
	string name;
	string number;
	//行为 
	string showname()
	{
		return name;
	}
	string shownumber()
	{
		return number;
	}
};

int main()
{
	Student stu1;
	stu1.name = "Zhangsan";
	stu1.number =  "12345";
	cout << "该学生的姓名为：" << stu1.showname() << endl;
	cout << "该学生的学号为：" << stu1.shownumber() << endl;
}
*/

//答案： 
class Student
{
public:
	string name;
	int ID;
	void showStudent()
	{
		cout << "该学生的姓名为：" << name <<endl;
		cout << "该学生的学号为：" << ID << endl; 
	}
	
	void setName(string setname)
	{
		name = setname;
	}
	void setID(int setID)
	{
		ID = setID;
	}
};

int main()
{
	Student s1;//实例化
	s1.name = "张三";
	s1.ID = 1;
	s1.showStudent();
	
	s1.setName("李四");
	s1.setID(2);
	s1.showStudent();
	return 0;
}
