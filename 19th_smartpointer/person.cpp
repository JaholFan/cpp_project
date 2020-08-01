#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Person {

public:

	Person() {
		cout <<"Person()"<<endl;
	}

	~Person()
	{
		cout << "~Person()"<<endl;
	}

	void print(void)
	{
		cout<<"Hi ,I am print"<<endl;
	}
};

void test_func(void)
{
	Person *p = new Person();
}

int main(int argc,char**argv)
{
	test_func();
}
