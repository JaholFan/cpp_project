#include <iostream>
using namespace std;
class Singleton;
class Singleton
{
private:
	static Singleton *gInstance;
	static pthread_mutex_t g_tMutex;
	Singleton()
	{
		cout<<"Singleton()"<<endl;
	}
public:
	static Singleton*getInstance()
	{
	    return gInstance;	
	}
	void printInfo()
	{
		cout<<"Hi Singleton"<<endl;
	}
};

Singleton *Singleton::gInstance = new Singleton(); //懒汉模式：提前实例化

int main(int argc,char**argv)
{
	Singleton *s1 = Singleton::getInstance();
	s1->printInfo();
}
