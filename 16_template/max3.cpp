#include <iostream>
using namespace std;
template <typename T>
T& mymax(T&a,T&b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
}
template <typename T>
T* mymax2(T*a,T*b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
}
int main (int argc,char**argv)
{
	char a[] = "11";
	char b[] = "22";
	mymax(a,b);
	char c[] = "111";
	char d[] = "22";
	//mymax(c,d);//错误，类型不匹配：no matching function for call to ‘mymax(char [4], char [3])’
	mymax2(c,d);
}
