#include<bits/stdc++.h>
using namespace std;

struct Hero
{
    string name;
	int age;
	string sex;	
};

void bubblesort(Hero heroarray[],int len)
{
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(heroarray[j].age>heroarray[j+1].age)
			{
				Hero temp=heroarray[j];
				heroarray[j]=heroarray[j+1];
				heroarray[j+1]=temp;
			}
		}
	}
}

void print(Hero heroarray[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<heroarray[i].name<<" "<<heroarray[i].age<<" "<<heroarray[i].sex<<endl;
	}
}
int main()
{
	Hero heroarray[3]=
	{
		{"Áõ±¸",23,"ÄĞ"},
		{"¹ØÓğ",22,"ÄĞ"},
		{"ÕÅ·É",21,"ÄĞ"},
	}; 
	bubblesort(heroarray,3);
	print(heroarray,3);
}
