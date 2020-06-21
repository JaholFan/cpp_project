#include <stdio.h>
#include <iostream>
#include "dog.h"
namespace D{
    void Dog::setName(char*name){
        this->name = name;
    }
    void Dog::setAge(int age){
        this->age = age;
    }
    void Dog::printInfo()
    {
		std::cout<<"name:"<<this->name<<" age:"<<this->age<<std::endl;
    }

    void whoAmI(){
		std::cout<<"I am a dog"<<std::endl;
    }
}
