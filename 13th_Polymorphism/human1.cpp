#include <iostream>
using namespace std;
class Human{
public:
	virtual void eating(void){
		cout<<"eating with hand"<<endl;
	}
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

void test(Human &e)
{
	e.eating();
}

int main(int argc,char**argv){
	Human h;
	Chinese c;
	Englishman e;
	test(h);
	test(c);
	test(e);
}
