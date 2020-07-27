#include <iostream>
using namespace std;
template <typename T>
T& mymax(T&a,T&b)
{
	cout<<"1:"<<__PRETTY_FUNCTION__<<endl;
}
template <typename T>
const T& mymax(const T&a,const T&b)
{
	cout<<"2:"<<__PRETTY_FUNCTION__<<endl;
}
int& mymax(int&a,int&b)
{
	cout<<"3:"<<__PRETTY_FUNCTION__<<endl;
}

#if 0 
//说明：二义性，导致mymax(1,2)无法确定该调用const T& mymax(const T&a,const T&b)还是调用"T mymax(T a,T b)"
template <typename T>
T mymax(T a,T b)
{
	cout<<"4:"<<__PRETTY_FUNCTION__<<endl;
}
#endif
int main (int argc,char**argv)
{
	int a=1,b=2;
	mymax(1,2);
	mymax(a,b);
}
