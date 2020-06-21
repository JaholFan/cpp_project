#include <stdio.h>
int main(int argc,char**argv)
{
    int i = 0;
    char * names[] = {"zhang san","lisi"};
    char * jobs[] = {"worker","teacher"};
    int age [] = {10,20};
    for(i=0;i<2;i++){
        printf("name:%s,jobs:%s,age:%d\n",names[i],jobs[i],age[i]);
    }
}
