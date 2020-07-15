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
	using Father::key; //修改属性访问权限：protected → public
	void inside_test()
	{
		this->key = 1;
		cout<<"key="<<this->key<<endl;
		//this->money = 1; //错误：子类不可以访问父类private属性
		//cout<<"money="<<this->money<<endl;
		this->age = 2;
		cout<<"age="<<this->age<<endl;
	}
};

void outside_test(Son &s)
{
	s.key = 1; //正确：key的属性已经被修改为public
	cout<<"key="<<s.key<<endl;
	//s.money = 1; //错误：外接不可以访问父类private属性
	//cout<<"money="<<s.money<<endl;
	s.age = 2;
	cout<<"age="<<s.age<<endl;
}

int main(int argc,char**argv)
{
	Son s;
	s.inside_test();
	cout<<"..................."<<endl;
	outside_test(s);
	cout<<"==================="<<endl;
}
