
#include "Human.h"


void test_eating(Human *h)
{
	h->eating();
}


int main(int argc, char **argv)
{
	Human& e = CreateEnglishman("Bill", 10, "LonBon");
	Human& c = CreateChinese("Jahol", 11, "Beijing");

	Human* h[2] = {&e, &c};
	int i;
	for (i = 0; i < 2; i++)
		test_eating(h[i]);

	delete &e;
	delete &c;
	
	
	return 0;
}

