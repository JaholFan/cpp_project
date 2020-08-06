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
		if(gInstance == NULL){
			pthread_mutex_lock(&g_tMutex);
			if(gInstance == NULL)
				gInstance = new Singleton();
			pthread_mutex_unlock(&g_tMutex);
		}
	    return gInstance;	
	}
	void printInfo()
	{
		cout<<"Hi Singleton"<<endl;
	}
};

Singleton *Singleton::gInstance = NULL;  //饿汉模式：用到时才实例化
pthread_mutex_t Singleton::g_tMutex  = PTHREAD_MUTEX_INITIALIZER;

int main(int argc,char**argv)
{
	Singleton *s1 = Singleton::getInstance();
	s1->printInfo();
}
