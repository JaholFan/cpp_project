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

template <typename T>
class SmartPoint{
private:
	T *p;
public:
	SmartPoint():p(0){
		cout<<"SmartPoint()"<<endl;
	}
	SmartPoint(T *p){
		cout<<__PRETTY_FUNCTION__<<endl;
		this->p = p;
		p->incStrongCnt();
	}
	SmartPoint(const SmartPoint &sp){
		cout<<__PRETTY_FUNCTION__<<endl;
		this->p = sp.p;
		p->incStrongCnt();
	}
	~SmartPoint(){
		cout<<__PRETTY_FUNCTION__<<endl;
		p->decStrongCnt();
		if(!p->getStrongCnt())
		{
			delete this->p;
			p = NULL;
		}
	}
	T* operator->(){
		return this->p;
	}
	T& operator*(){
		return *p;
	}
};

template <typename T>
void test_func(T &temp_sp)
{
	cout<<__PRETTY_FUNCTION__<<endl;
	T sp = temp_sp;
	sp->print();
}

int main(int argc,char**argv)
{
	//SmartPoint<Person> sp = SmartPoint<Person>(new Person()); //这种写法可以
	SmartPoint<Person> sp = new Person(); //这种写法更简单
	sp->print();
	(*sp).print();
	test_func(sp);
}
