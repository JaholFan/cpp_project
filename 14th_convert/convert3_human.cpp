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

void test(Human &h)
{
	Chinese &c = dynamic_cast<Chinese&>(h);
	c.eating();
	Englishman &e = dynamic_cast<Englishman&>(h);
	e.eating();
}

int main(int argc,char**argv){
	Chinese c;
	test(c);
}
