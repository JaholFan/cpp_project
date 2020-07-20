#include <iostream>
using namespace std;

int main(int argc,char**argv)
{
	const char *str = "jahol";
	char *str1 = const_cast<char*>(str);
	int *p = reinterpret_cast<int *>(str1);
	printf("str addr=0x%lx\n",reinterpret_cast<unsigned long>(str1));
	printf("p addr=0x%lx\n",reinterpret_cast<unsigned long>(p));
}
