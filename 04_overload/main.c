#include <iostream>
using namespace std;
int add(int a,int b)
{
	cout<<"int+int"<<endl;
	return a+b;
}

int add(int a,int b,int c)
{
	cout<<"int+int+int"<<endl;
	return a+b+c;
}

double add(int a,double b)
{
	cout<<"int+double"<<endl;
	return (double)a+b;
}

double add(double b,int a)
{
	cout<<"double+int"<<endl;
	return (double)a+b;
}

int main(int argc,char **argv)
{
	add(1,2);
	add(1,2,3);
	add(1,2.0);
	add(2.0,1);	
}
