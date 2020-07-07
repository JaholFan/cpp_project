#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;
class Person{
private:
	static int cnt;
    char *name;
    int age;
public:
	Person(){
		cnt ++;
		this->age = 0;
		this->name = NULL;
	}
	Person(char*name,int age){
		cnt ++;
		this->name = new char[strlen(name)+1];
		strcpy(this->name,name);
		this->age = age;	
	}
	~Person(){
		if(this->name)
			delete this->name;
	}
	static int get_cnt(){
		return cnt;
	}

};
int Person::cnt = 0; //定义并初始化
int main(int argc,char**argv)
{
	Person *per = new Person[10];
	cout<<"cnt="<<Person::get_cnt()<<endl;
}
