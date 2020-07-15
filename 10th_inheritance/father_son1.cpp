#include <iostream>
using namespace std;
class Father{
private:
	int money;
protected:
	int key;
	int getMoney_protected(){
		return money;
	}
	void setMoney_protected(int money){
		this->money=money;
	}
public:
	int age;
	int getMoney_public(){
		return money;
	}
	void setMoney_public(int money){
		this->money=money;
	}
};

class Son : public Father{
private:
public:
	void test(void){
		key = 1; //正确：子类可以访问父类的protected属性
		cout<<"key="<<key<<endl;
		//money = 1; //错误：子类不可以访问父类private属性
		//cout<<"money="<<money<<endl;
		//正确的做法：
		setMoney_protected(10);
		cout<<"money="<<getMoney_protected()<<endl;
		setMoney_public(20);
		cout<<"money="<<getMoney_public()<<endl;
		age = 1;
		cout<<"age="<<age<<endl;
	}
};

int main(int argc,char**argv)
{
	Son s;
	s.test();
}
