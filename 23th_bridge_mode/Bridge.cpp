#include <iostream>
using namespace std;
class OS{
public:
	virtual void installOS() =0;
};

class Linux : public OS{
public:
	virtual void installOS()
	{
		cout<<"instal Linux OS"<<endl;
	}
};
class Windows : public OS{
public:
	virtual void installOS()
	{
		cout<<"instal Windows OS"<<endl;
	}
};

class Computer{
public:
	virtual void printComputer() = 0;
};

class HuaWei : public Computer
{
public:
	virtual void printComputer()
	{
		cout<<"HuaWei PC"<<endl;
	}
};

class Mi : public Computer
{
public:
	virtual void printComputer()
	{
		cout<<"Mi PC"<<endl;
	}
};

class HuaWeiWithLinux : public Linux,HuaWei
{
public:
	void installLinux()
	{
		printComputer();
		installOS();
	}
};

class HuaWeiWithWindows : public Windows,HuaWei
{
public:
	void installWindows()
	{
		printComputer();
		installOS();
	}
};


class MiWithLinux : public Linux,Mi
{
public:
	void installLinux()
	{
		printComputer();
		installOS();
	}
};

class MiWithWindows : public Windows,Mi
{
public:
	void installWindows()
	{
		printComputer();
		installOS();
	}
};

int main(int argc,char**argv)
{
	HuaWeiWithLinux p1;
	HuaWeiWithWindows p2;
	MiWithLinux p3;
	MiWithWindows p4;	

	p1.installLinux();
	p2.installWindows();
	p3.installLinux();
	p4.installWindows();
}
