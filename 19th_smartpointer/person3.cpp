#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Person {

public:

	Person() {
		cout <<".";
	}

	~Person()
	{
		cout << "~";
	}

	void print(void)
	{
		cout<<"Hi ,I am print"<<endl;
	}
};

void test_func(void)
{
	Person p;
}

int main(int argc,char**argv)
{
	int i = 0;
	for(i=0;i<10000000;i++)
		test_func();
	while(1);
}
