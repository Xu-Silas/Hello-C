#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string  m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	Person personArray[MAX];//联系人信息数组 
	int m_Size;//联系人数量 
};

void showmenu()
{
	cout<<"************************"<<endl;
	cout<<"***** 1.添加联系人 *****"<<endl;
	cout<<"***** 2.显示联系人 *****"<<endl;
	cout<<"***** 3.删除联系人 *****"<<endl;
	cout<<"***** 4.查找联系人 *****"<<endl;
	cout<<"***** 5.修改联系人 *****"<<endl;
	cout<<"***** 6.清空联系人 *****"<<endl;
	cout<<"***** 0.退出通讯录 *****"<<endl;
	cout<<"************************"<<endl; 
}

void addPerson(Addressbooks* abs)
{   
	if(abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
	}
	else
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		
		int Sex;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while(true)
	{   
	    cin >> Sex;
		if(Sex == 1||Sex == 2)
		{
		abs->personArray[abs->m_Size].m_Sex = Sex;
		break;
	    }
	    cout << "输入有误，请重新输入！" << endl;
	}
	
	    int Age;
	    cout << "请输入年龄：" << endl;
	    cin >> Age;
	    abs->personArray[abs->m_Size].m_Age = Age;
	    
	    string Phone;
	    cout << "请输入联系电话：" << endl;
	    cin >> Phone;
	    abs->personArray[abs->m_Size].m_Phone = Phone;
	    
	    string Address;
	    cout << "请输入家庭住址" <<endl;
	    cin >> Address;
	    abs->personArray[abs->m_Size].m_Addr = Address;
	    
	    cout << endl;
	    cout << "添加成功！" <<endl;
		system("cls");
		abs->m_Size ++;
	}
}

void showPerson(Addressbooks* abs)
{   
    if(abs->m_Size == 0)
    {
    	cout << "当前记录为空" <<endl;
	}
	else
	{
	    for(int i = 0;i < abs->m_Size;i++)
	    {
	    	cout << "姓名：" << abs->personArray[i].m_Name << "\t"; 
	    	cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女")<< "\t";
	    	cout << "年龄：" << abs->personArray[i].m_Age << "\t";
	    	cout << "联系电话：" << abs->personArray[i].m_Phone << "\t";
	    	cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
    }
    system("pause");
    system("cls");
}

int main()
{   
    Addressbooks abs;
    abs.m_Size = 0;//初始化人数为0 
    int select = 0; //用户所选功能对应的数 
    while(true)
{
	showmenu();
	
	cin >> select;
	
	switch (select)
	{
		case 1: //添加联系人 
		    addPerson(&abs);
			break;
		case 2: //显示联系人 
		    showPerson(&abs);
			break;
		case 3: //删除联系人 
		    break;
		case 4: //查找联系人 
		    break;
		case 5: //修改联系人 
		    break;
		case 6: //清空联系人 
		    break;
		case 0: //退出通讯录 
		    cout << "欢迎下次使用" << endl;
		    return 0;
			break;	
		default:
			break;
	}
}
}
