#include "stdio.h"
namespace D{
class Dog{
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
