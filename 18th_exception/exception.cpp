#include <iostream>
using namespace std;

void B(void){
	int i = 1;
	throw i;
}

void A(void){
	try{
		B();
	}catch(int i){
		cout<<"catch exception,i="<<i<<endl;
	}
}

int main(int argc,char**argv)
{
	A();
}
