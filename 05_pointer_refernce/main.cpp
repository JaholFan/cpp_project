#include <iostream>
using namespace std;
int add_one_pointer(int *p)
{
	*p = *p +1;
}

int add_one_ref(int &f)
{
	f = f+1;
}
int main(int argc,char**argv)
{
	int a = 1;
	int &b= a;
	add_one_pointer(&a);
	cout<<"a="<<a<<endl;
	add_one_ref(b);
	cout<<"a="<<a<<endl;
	
}
