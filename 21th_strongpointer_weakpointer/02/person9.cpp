#include <iostream>
#include <string.h>
#include <unistd.h>
#include <utils/RefBase.h>

using namespace std;
using namespace android;
class Person : public RefBase {
private:
	wp<Person> father;
	wp<Person> son;
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

	void setFather(sp<Person> &p){
		this->father = p;

	}
	void setSon(sp<Person> &p){
		this->son = p;
	}
};

int main(int argc,char**argv)
{
	//sp<Person> sp_obj = sp<Person>(new Person()); //这种写法可以
	//sp<Person> sp_obj = new Person(); //这种写法更简单
	sp<Person> father = new Person();
	sp<Person> son = new Person();
	father->setSon(son);	
	son->setFather(father);
}
