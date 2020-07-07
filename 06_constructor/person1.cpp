#include <iostream>
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
		this->name = name;
		this->age = age;	
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
	Person *p1 = new Person[2];
	Person *p2 = new Person();
	Person *p3 = new Person;
	delete p;
	delete []p1;
	delete p2;
	delete p3;
}
