#include <iostream>
using namespace std;
class OS{
public:
	virtual void installOS_impl()=0;
};

class Linux : public OS{
public:
	void installOS_impl()
	{
		cout<<"instal Linux OS"<<endl;
	}
};
class Windows : public OS{
public:
	void installOS_impl()
	{
		cout<<"instal Windows OS"<<endl;
	}
};

class Computer{
public:
	virtual void printComputer() = 0;
	virtual void installOS() = 0;
};

class HuaWei : public Computer
{
public:
	HuaWei(OS *impl)
	{
		this->impl = impl;
	}
	virtual void printComputer()
	{
		cout<<"HuaWei PC"<<endl;
	}
	virtual void installOS()
	{
		printComputer();
		impl->installOS_impl();	
	}
private:
	OS *impl;
};

class Mi : public Computer
{
public:
	Mi(OS *impl)
	{
		this->impl = impl;
	}
	virtual void printComputer()
	{
		cout<<"Mi PC"<<endl;
	}
	virtual void installOS()
	{
		printComputer();
		impl->installOS_impl();	
	}
private:
	OS *impl;
};

int main(int argc,char**argv)
{
	OS *os1 = new Linux();
	OS *os2 = new Windows();
	HuaWei *h1 = new HuaWei(os1);
	HuaWei *h2 = new HuaWei(os2);
	Mi *m1 = new Mi(os1);
	Mi *m2 = new Mi(os2);

	h1->installOS();
	h2->installOS();
	m1->installOS();
	m2->installOS();
}
