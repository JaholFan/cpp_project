#include <iostream>
#include <string.h>
#include <unistd.h>
#include <utils/RefBase.h>

using namespace std;
using namespace android;
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

int main(int argc,char**argv)
{
	//sp<Person> sp_obj = sp<Person>(new Person()); //这种写法可以
	//sp<Person> sp_obj = new Person(); //这种写法更简单
	wp<Person> p = new Person();
	//p->print(); //错误：弱指针没有重载->
	sp<Person> p1 = p.promote();
	if(p1 != NULL)
		p1->print();
}
