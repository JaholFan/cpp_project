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
		cout<<"construct:name "<<name<<" ;age "<<age<<endl;
		this->name = new char[strlen(name)+1];
		strcpy(this->name,name);
		this->age = age;	
	}
	~Person(){
		cout<<"destroy "<<this->name<<endl;
		if(this->name)
			delete this->name;
	}
};

class Student{
private:
	Person father;
	Person mother;
	int id;
public:
	Student(int id,char*f_name,int f_age,char*m_name,int m_age):father(f_name,f_age),mother(m_name,m_age){
		cout<<"construct Student"<<endl;
		this->id = id;	
	}
	~Student(){
		cout<<"~Student"<<endl;
	}
};
int main(int argc,char**argv)
{
	Student s(12345,"my_father",60,"my_mother",50);
}
