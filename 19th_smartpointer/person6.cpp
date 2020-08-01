#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Person {
private:
	int cnt;
public:

	Person():cnt(0) {
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
	void incStrongCnt(void)
	{
		cnt++;
	}
	void decStrongCnt(void)
	{
		if(cnt)
			cnt--;
	}
	int getStrongCnt(void)
	{
		return cnt;
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
		cout<<"this->p="<<this->p<<endl;
		p->incStrongCnt();
	}
	SmartPoint(const SmartPoint &sp){
		cout<<"SmartPoint(const SmartPoint &sp)"<<endl;
		this->p = sp.p;
		cout<<"this->p="<<this->p<<endl;
		p->incStrongCnt();
	}
	~SmartPoint(){
		cout<<"~SmartPoint()"<<endl;
		p->decStrongCnt();
		if(!p->getStrongCnt())
		{
			cout<<"delete this->p="<<this->p<<endl;
			delete this->p;
			p = NULL;
		}
	}
	Person* operator->(){
		return this->p;
	}
};

void test_func(SmartPoint &temp_sp)
{
	SmartPoint sp = temp_sp;
	sp->print();
}

int main(int argc,char**argv)
{
	SmartPoint sp = SmartPoint(new Person());
	test_func(sp);
}
