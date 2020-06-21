#include <stdio.h>
struct Person{
    char *name;
    char *jobs;
    int age;
    void (*printInfo)(struct Person *p);
};

void printInfo(struct Person *p)
{
    printf("name:%s,jobs:%s,age:%d\n",p->name,p->jobs,p->age);
}
int main(int argc,char**argv)
{
    int i = 0;
    struct Person p[] ={
        {"zhang san","worker",10,printInfo},
        {"lisi","teacher",20,printInfo},
    };
    p[0].printInfo(&p[0]);
    p[1].printInfo(&p[1]);
}
