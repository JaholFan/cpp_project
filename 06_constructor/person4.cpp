#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;
class Person{
private:
    char *name;
    int age;
public:
	Person(){
		cout<<"Person()"<<endl;	
	}
	Person(char*name,int age){
		cout<<"construct:"<<name<<endl;	
		this->name = new char[strlen(name)+1];
		strcpy(this->name,name);
		this->age = age;	
	}
	~Person(){
		cout<<"~Person()"<<endl;
		if(this->name)
			delete this->name;
	}

    void printInfo()
    {
        printf("name:%s,age:%d\n",this->name,this->age);
    }
};

void func(void)
{
	static Person per_static("per_static",10);
}
Person per_global("per_global",10);
int main(int argc,char**argv)
{
	int i = 0;
	Person per_main1("per_main1",10);
	Person per_main2("per_main2",10);
	for(i=0;i<2;i++)
		func();
}
