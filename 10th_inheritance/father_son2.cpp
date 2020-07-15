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

class Girl : private Father{
private:
public:
	void inside_test3()
	{
		this->key = 1;
		cout<<"key="<<this->key<<endl;
		//this->money = 1; //错误：子类不可以访问父类private属性
		//cout<<"money="<<this->money<<endl;
		this->age = 2;
		cout<<"age="<<this->age<<endl;
	}
};

class Son : protected Father{
private:
public:
	void inside_test2()
	{
		this->key = 1;
		cout<<"key="<<this->key<<endl;
		//this->money = 1; //错误：子类不可以访问父类private属性
		//cout<<"money="<<this->money<<endl;
		this->age = 2;
		cout<<"age="<<this->age<<endl;
	}
};

class AdoptedChild  : public Father{
private:
public:
	void inside_test1()
	{
		this->key = 1;
		cout<<"key="<<this->key<<endl;
		//this->money = 1; //错误：子类不可以访问父类private属性
		//cout<<"money="<<this->money<<endl;
		this->age = 2;
		cout<<"age="<<this->age<<endl;
	}
};

void outside_test1(AdoptedChild &ac)
{
	//ac.key = 1; //错误：外界不可以访问类的protected属性
	//cout<<"key="<<ac.key<<endl;
	//ac.money = 1; //错误：外接不可以访问父类private属性
	//cout<<"money="<<ac.money<<endl;
	ac.age = 2;
	cout<<"age="<<ac.age<<endl;
}

void outside_test2(Son &s)
{
	//s.key = 1; //错误：外界不可以访问类的protected属性
	//cout<<"key="<<s.key<<endl;
	//s.money = 1; //错误：外接不可以访问父类private属性
	//cout<<"money="<<s.money<<endl;
	//s.age = 2; //错误：age的属性已经被改为private，类外不能访问
	//cout<<"age="<<s.age<<endl;
}

void outside_test3(Girl &g)
{
	//g.key = 1; //错误：外界不可以访问类的protected属性(已经被改为private)
	//cout<<"key="<<g.key<<endl;
	//g.money = 1; //错误：不可以访问父类private属性
	//cout<<"money="<<g.money<<endl;
	//g.age = 2; //错误：age的属性已经被改为private
	//cout<<"age="<<g.age<<endl;
}

int main(int argc,char**argv)
{
	AdoptedChild a;
	a.inside_test1();
	cout<<"..................."<<endl;
	outside_test1(a);
	cout<<"==================="<<endl;


	Son s;
	s.inside_test2();
	cout<<"..................."<<endl;
	outside_test2(s);
	cout<<"==================="<<endl;


	Girl g;
	g.inside_test3();
	cout<<"..................."<<endl;
	outside_test3(g);
	cout<<"==================="<<endl;
}
