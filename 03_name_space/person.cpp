#include <stdio.h>
#include <iostream>
#include "person.h"
using namespace std;
namespace P{
    void Person::setName(char*name){
        this->name = name;
    }
    void Person::setAge(int age){
        this->age = age;
    }
    void Person::printInfo()
    {
        cout<<"name:"<<this->name<<" age:"<<this->age<<endl;
    }

    void whoAmI(){
        cout<<"I am a person"<<endl;
    }
}
