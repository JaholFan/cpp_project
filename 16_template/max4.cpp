#include <iostream>
using namespace std;
template <typename T>
void test(T a)
{
	cout<<__PRETTY_FUNCTION__<<endl;
}
int func(void)
{
	return 0;
}
int main (int argc,char**argv)
{
	test(func);  //函数名
	test(&func); //取地址
}
