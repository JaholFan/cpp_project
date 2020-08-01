#include <iostream>
using namespace std;

void print(int &a)
{
	cout<<a<<endl;
}

int getInt()
{
	return 1;
}
int main(int argc,char**argv)
{
	print(getInt());	
}
