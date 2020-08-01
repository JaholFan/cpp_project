#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;
class RefBase{
private:
	int cnt;
public:
	RefBase():cnt(0){}
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
class Person : public RefBase {
public:

	Person(){
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
		p->incStrongCnt();
	}
	SmartPoint(const SmartPoint &sp){
		cout<<"SmartPoint(const SmartPoint &sp)"<<endl;
		this->p = sp.p;
		p->incStrongCnt();
	}
	~SmartPoint(){
		cout<<"~SmartPoint()"<<endl;
		p->decStrongCnt();
		if(!p->getStrongCnt())
		{
			delete this->p;
			p = NULL;
		}
	}
	Person* operator->(){
		return this->p;
	}
	Person& operator*(){
		return *p;
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
	sp->print();   // 相当于 Person*p =new Person(); p->print(); 但安全性高于直接使用指针
	(*sp).print(); // 相当于 Person*p =new Person(); (*p).print(); 但安全性高于直接使用指针
}
