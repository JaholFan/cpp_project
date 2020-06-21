#include <stdio.h>
class Person{
public:
    char *name;
    char *jobs;
    int age;
    void printInfo()
    {
        printf("name:%s,jobs:%s,age:%d\n",this->name,this->jobs,this->age);
    }
};

int main(int argc,char**argv)
{
    int i = 0;
    class Person p[] ={
        {"zhang san","worker",10},
        {"lisi","teacher",20},
    };
    p[0].printInfo();
    p[1].printInfo();
}
