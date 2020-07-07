#include <iostream>
using namespace std;
class Person{
private:
    char *name;
    int age;
public:
	Person(){
		cout<<"default constructore function"<<endl;	
	}
	Person(char*name,int age){
		cout<<"user define constructore function"<<endl;	
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
    Person p("jahol",26);
	Person p1;
    p.printInfo();
}
