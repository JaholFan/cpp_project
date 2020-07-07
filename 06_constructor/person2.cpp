#include <iostream>
#include <string.h>
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
    Person *p = new Person("jahol",26);
	delete p;
}
