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
		cout<<"Person(char*name,int age)"<<endl;	
		this->name = new char[strlen(name)+1];
		strcpy(this->name,name);
		this->age = age;	
	}
	Person(Person &p){
		cout<<"Person(Person &p)"<<endl;	
		this->name = new char[strlen(p.name)+1];
		strcpy(this->name,p.name);
		this->age = p.age;
	}
	~Person(){
		cout<<"~Person()"<<endl;
		if(this->name)
			delete this->name;
	}

    void setName(char*name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }

    void printInfo()
    {
        printf("name:%s,age:%d\n",this->name,this->age);
    }
};

int main(int argc,char**argv)
{
	int i = 0;
	Person per("jahol",26);
	Person per1(per);
	per1.printInfo();
}
