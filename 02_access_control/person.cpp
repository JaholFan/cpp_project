#include <stdio.h>
class Person{
private:
    char *name;
    char *jobs;
    int age;
public:
    void setName(char*name){
        this->name = name;
    }
    void setJobs(char*jobs){
        this->jobs = jobs;
    }
    void setAge(int age){
        this->age = age;
    }
    void printInfo()
    {
        printf("name:%s,jobs:%s,age:%d\n",this->name,this->jobs,this->age);
    }
};

int main(int argc,char**argv)
{
    Person p;
    p.setName("jahol");
    p.setJobs("programmer");
    p.setAge(26);
    p.printInfo();
}
