#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

struct Person//联系人结构体 
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string  m_Phone;
	string m_Addr;
};

struct Addressbooks//通讯录结构体 
{
	Person personArray[MAX];//联系人信息数组 
	int m_Size;//联系人数量 
};

int isExist(Addressbooks* abs,string name)//检测联系人是否存在的函数 
{
	for(int i = 0; i < abs->m_Size; i++)
	{
		if(abs->personArray[i].m_Name == name)
		{
			return i;//遍历找到，返回该联系人编号，函数完 
		}
	}
	return -1;//遍历未找到，返回-1 
} 

void deletePerson(Addressbooks* abs)//删除联系人函数 
{
	cout << "请输入您要删除的联系人" <<endl;
	
	string name1;
	cin >> name1;
	
	int ret = isExist(abs,name1);
	if(ret != -1)
	{
		for(int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i+1];//从要删除的人开始，让后一个人覆盖他自己 
		}
		abs->m_Size --;//更新人数 
		cout << "删除成功！" << endl; 
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs)//查找联系人函数 
{
	cout << "请输入你要查找的联系人" <<endl;
	string name;
	cin >> name;
    int ret = isExist(abs,name);
    if(ret != -1)
    {
    	cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
    	cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
    	cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
    	cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
    	cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" <<endl;
	}
	system("pause");
	system("cls");
}


void showmenu()//菜单函数 
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

void addPerson(Addressbooks* abs)//添加联系人函数 
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

void showPerson(Addressbooks* abs)//显示联系人函数 
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

void modifyPerson(Addressbooks* abs)//修改联系人函数 
{   
    cout << "请输入您要修改的联系人" <<endl;
    
    for(int i = 0; i<abs->m_Size; i++)
    {
    	cout << abs->personArray[i].m_Name <<endl;
	}
	cout << endl;
	cout << endl;
	
	string name;
    cin >> name;
	int ret = isExist(abs,name);
	
	if(ret != -1)
	{
		cout << "请输入姓名："  << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		
		cout << "请输入性别："  << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		
		while(true)
		{
		    cin >> sex;
		    if(sex == 1 || sex == 2)
	    	{
			    abs->personArray[ret].m_Sex = sex;
		    	break;
		    }
		    	cout << "输入有误，请重新输入" <<endl; 
	    }
			
		cout << "请输入年龄" << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		
		cout << "请输入联系电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		
		cout << "请输入家庭住址" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
		
		cout << "修改成功！" <<endl;
		system("pause");
		system("cls");
		}
	else
	{
		cout << "查无此人" << endl;
	}
}

void cleanPerson(Addressbooks* abs)//清空通讯录函数 
{
	cout << "确认清空通讯录吗？" <<endl;
	cout << "1 --- 确认" <<endl ;
	cout << "2 --- 取消" <<endl ;
	cout << endl;
	int select;
	cin >> select;
	
	if(select == 1)
	{
	    abs->m_Size = 0;
	    cout << "通讯录已清空" << endl;
    }
    else
    {
        cout << "已取消" << endl;
	}
	system("pause");
	system("cls");
}

int main()
{   
    Addressbooks abs;//创建通讯录结构体的变量 
    abs.m_Size = 0;//初始化人数为0 
    int select = 0; //用户所选功能对应的数 
    while(true)
{
	showmenu();//显示菜单 
	cout << endl;
	
	cin >> select;//选择功能 
	
	switch (select)
	{
		case 1: //添加联系人 
		    cout << endl;
		    addPerson(&abs);
			break;
		case 2: //显示联系人 
		    cout << endl;
		    showPerson(&abs);
			break;
		case 3: //删除联系人 
		    cout << endl;
			deletePerson(&abs) ;
		    break;
		case 4: //查找联系人
		    cout << endl;
		    findPerson(&abs); 
		    break;
		case 5: //修改联系人 
		    cout << endl;
	        modifyPerson(&abs);
		    break;
		case 6: //清空联系人 
		    cout << endl;
		    cleanPerson(&abs);
		    break;
		case 0: //退出通讯录 
		    cout << endl;
		    cout << "欢迎下次使用" << endl;
		    system("pause");
		    return 0;
			break;	
		default:
			break;
	}
}
}
