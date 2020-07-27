#include <iostream>
using namespace std;
/*
int& max(int&a,int&b)
{
	return a>b?a:b;
}
float& max(float&a,float&b)
{
	return a>b?a:b;
}
*/
template <typename T>
T& max(T&a,T&b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
}
int main (int argc,char**argv)
{
	int ai = 1,bi=2;
	max(ai,bi);
	float af=1.0,bf=2.0;
	max(af,bf);	
}
