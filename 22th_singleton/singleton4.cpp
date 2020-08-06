#include <iostream>
using namespace std;
class Singleton;
Singleton *gInstance;
static pthread_mutex_t g_tMutex  = PTHREAD_MUTEX_INITIALIZER;
class Singleton
{
private:
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

int main(int argc,char**argv)
{
	Singleton *s1 = Singleton::getInstance();
	//Singleton *s2 = new Singleton();  //错误的写法
	s1->printInfo();
}
