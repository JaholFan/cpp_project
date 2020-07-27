#include <iostream>
using namespace std;
template <typename T>
class AAA{
private:
	T val;
public:
	void setVal(const T v);
	void print(void);
};

template <typename T> void AAA<T>::setVal( const T v){
	val = v;
}
template <typename T> void AAA<T>::print(void){
	cout<<val<<endl;
}
int main(int argc,char**argv)
{
	AAA<int> a;
	a.setVal(1);
	a.print();

	AAA<double> b;
	b.setVal(1.23);
	b.print();
}
