#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;

int main(int argc,char**argv)
{
	int a = 1;
	int &b = a;
	int c = b;
	int &d = b;
	cout <<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
}

