#include <iostream>
using namespace std;
template <typename T>
T& mymax(const T&a,const T&b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
}
int main (int argc,char**argv)
{
	int a=1,b=2;
	mymax(a,b);
}
