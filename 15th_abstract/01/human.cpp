#include <iostream>
using namespace std;
class Human{
public:
	virtual void eating(void)=0;
};

class Chinese:public Human{
public:
	void eating(void){
		cout<<"eating with chopstick"<<endl;
	}
};

class Englishman:public Human{
public:
	void eating(void){
		cout<<"eating with knife"<<endl;
	}
};

void test(Human *e)
{
	e->eating();
}

int main(int argc,char**argv){
	Chinese c;
	Englishman e;
	test(&c);
	test(&e);
}
