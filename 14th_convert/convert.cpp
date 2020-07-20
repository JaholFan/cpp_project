#include <iostream>
using namespace std;

int main(int argc,char**argv)
{
	double d = 100.1;
	int i = (int)d;
	char *str = "jahol";
	int *p = reinterpret_cast<int *>(str);
	cout<<"i="<<i<<endl;
	printf("str addr=0x%lx\n",reinterpret_cast<unsigned long>(str));
	printf("p addr=0x%lx\n",reinterpret_cast<unsigned long>(p));
}
