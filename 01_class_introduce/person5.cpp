#include <stdio.h>
struct Person{
    char *name;
    char *jobs;
    int age;
    void printInfo()
    {
        printf("name:%s,jobs:%s,age:%d\n",name,jobs,age);
    }
};

int main(int argc,char**argv)
{
    int i = 0;
    struct Person p[] ={
        {"zhang san","worker",10},
        {"lisi","teacher",20},
    };
    p[0].printInfo();
    p[1].printInfo();
}
