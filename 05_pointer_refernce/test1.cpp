#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;
int& add_one(int &r)
{
	r++;
	return r;
}

int main(int argc,char**argv)
{
	int a = 1;
	int &b = a;
	int ret;
	cout<<"b="<<b<<endl;
	ret = add_one(a);
	cout<<"a="<<a<<" b="<<b<<" ret="<<ret<<endl;
	ret = add_one(b);
	cout<<"a="<<a<<" b="<<b<<" ret="<<ret<<endl;
	
}

