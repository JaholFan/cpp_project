#include <iostream>
#include <string.h>
#include <unistd.h>
#include "RefBase.h"
#include "StrongPointer.h"

using namespace std;
using namespace android::RSC;
class Person : public LightRefBase<Person> {
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
void test_func(T &temp_sp)
{
	cout<<__PRETTY_FUNCTION__<<endl;
	T sp_obj = temp_sp;
	sp_obj->print();
}

int main(int argc,char**argv)
{
	//sp<Person> sp_obj = sp<Person>(new Person()); //这种写法可以
	sp<Person> sp_obj = new Person(); //这种写法更简单
	sp_obj->print();
	(*sp_obj).print();
	test_func(sp_obj);
}
