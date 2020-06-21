#include <stdio.h>
#include "person.h"
#include "dog.h"
using namespace D;
using namespace P;
int main(int argc,char**argv)
{
    Person p;
	Dog g;
	
    p.setName("jahol");
    p.setAge(26);
	P::whoAmI();
    p.printInfo();

    g.setName("wangcai");
    g.setAge(3);
	D::whoAmI();
    g.printInfo();
}

