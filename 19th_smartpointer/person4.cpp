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

class SmartPoint{
private:
	Person *p;
public:
	SmartPoint():p(0){
		cout<<"SmartPoint()"<<endl;
	}
	SmartPoint(Person *p){
		cout<<"SmartPoint(Person *p)"<<endl;
		this->p = p;
	}
	~SmartPoint(){
		cout<<"~SmartPoint()"<<endl;
		delete p;
	}
	Person* operator->(){
		return this->p;
	}
};

void test_func(void)
{
	SmartPoint sp = SmartPoint(new Person());
	sp->print();
}

int main(int argc,char**argv)
{
	test_func();
}
