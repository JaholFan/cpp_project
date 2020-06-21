#include <stdio.h>
struct Person{
    char *name;
    char *jobs;
    int age;
};
int main(int argc,char**argv)
{
    int i = 0;
    struct Person p[] ={
        {"zhang san","worker",10},
        {"lisi","teacher",20},
    };
    for(i=0;i<2;i++){
        printf("name:%s,jobs:%s,age:%d\n",p[i].name,p[i].jobs,p[i].age);
    }
}
