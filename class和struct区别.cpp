#include<bits/stdc++.h>
using namespace std;

//struct默认权限为 public
//class默认权限为 private

class C1
{
	int A;//默认为私有 
};

struct C2
{
	int A;//默认为公共 
};

int main()
{
	C1 c1;
	//c1.A = 100; 私有，访问不了 
	C2 c2;
	c2.A = 200; //公共，可以访问 
}

