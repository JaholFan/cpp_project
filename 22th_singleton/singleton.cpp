#include <iostream>
using namespace std;
class Singleton;
Singleton *gInstance;
class Singleton
{
public:
	static Singleton*getInstance()
	{
		if(gInstance == NULL)
			gInstance = new Singleton();
	    return gInstance;	
	}
	Singleton()
	{
		cout<<"Singleton()"<<endl;
	}
	void printInfo()
	{
		cout<<"Hi Singleton"<<endl;
	}
};

int main(int argc,char**argv)
{
	Singleton *s1 = Singleton::getInstance();
	s1->printInfo();
}
