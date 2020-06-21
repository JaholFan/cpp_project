#include <stdio.h>
namespace P{
class Person{
private:
    char *name;
    int age;
public:
    void setName(char*name);
    void setAge(int age);
	void printInfo();
};
void whoAmI();
}
