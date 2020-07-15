#include <iostream>
using namespace std;
class Father{
private:
	int money;
protected:
	int key;
public:
	int age;
};

class Son : public Father{
private:
public:
	void test(void){
		key = 1; //正确：子类可以访问父类的protected属性
		cout<<"key="<<key<<endl;
		//money = 1; //错误：子类不可以访问父类private属性
		//cout<<"money="<<money<<endl;
		age = 1;
		cout<<"age="<<age<<endl;
	}
};

void test1(Father&f)
{
	//f.key = 1; //错误：外界不可以访问类的protected属性
	//cout<<"key="<<f.key<<endl;
	//f.money = 1; //错误：子类不可以访问父类private属性
	//cout<<"money="<<f.money<<endl;
	f.age = 2;
	cout<<"age="<<f.age<<endl;
}
int main(int argc,char**argv)
{
	Son s;
	Father f;
	s.test();
	cout<<"-----------"<<endl;
	test1(f);
}
