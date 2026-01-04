#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string num;
    getline(cin,num);
    int x=num[0]*num[6];
    int y=num[2]*num[4];
    if(x<y)
    {
        cout<<num[0]<<"/"<<num[2]<<" < "<<num[4]<<"/"<<num[6];
    }
    else if(x==y)
    {
        cout<<num[0]<<"/"<<num[2]<<" = "<<num[4]<<"/"<<num[6];
    }
    else if(x>y)
    {
        cout<<num[0]<<"/"<<num[2]<<" > "<<num[4]<<"/"<<num[6];
    }
}
