#include<bits/stdc++.h>
using namespace std;

//结构体案例1:三个老师各带五个学生 
struct student
{
	string sname;
	int score;
};

struct teacher
{
	string tname;
	student array[5];
};

void allocatespace(teacher* tarray,int len)
{   
    string nameseed="ABCDE";
	for(int i=0;i<len;i++)
	{
		tarray[i].tname="Teacher_";
		tarray[i].tname+=nameseed[i];
		
	    for(int j=0;j<5;j++)
	    {
	        tarray[i].array[j].sname="Student_";
	        tarray[i].array[j].sname+=nameseed[j];
	        int random=rand() %61+40;
	        tarray[i].array[j].score=random;
		}
	}
}
void printinfo(teacher* tarray,int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<"老师姓名："<<tarray[i].tname<<endl;
		
		for(int j=0;j<5;j++)
		{   
			cout<<"\t学生姓名："<<tarray[i].array[j].sname;
			cout<<"     学生分数："<<tarray[i].array[j].score<<endl;
		}
		cout<<endl;
	}
}

int main()
{   
    srand((unsigned int)time(NULL));
	teacher tarray[3];
	int len=sizeof(tarray)/sizeof(tarray[0]);
	allocatespace(tarray,len);
	printinfo(tarray,len);
} 
