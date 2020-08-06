#include <iostream>
using namespace std;
class Singleton;
Singleton *gInstance;
static pthread_mutex_t g_tMutex  = PTHREAD_MUTEX_INITIALIZER;
class Singleton
{
public:
	static Singleton*getInstance()
	{
		pthread_mutex_lock(&g_tMutex);
		if(gInstance == NULL)
			gInstance = new Singleton();
		pthread_mutex_unlock(&g_tMutex);
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
	Singleton *s2 = Singleton::getInstance();
	Singleton *s3 = Singleton::getInstance();
	s1->printInfo();
}
