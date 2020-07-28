#include <iostream>
#include <stdlib.h>
using namespace std;

void B(int t) throw(int,float){
	int i    = 1;
	float j  = 1.1;
	double k = 2.2;
	if(0 == t){
		throw i;
	}else if(1 == t){
		throw j;
	}else if(2 == t){
		throw k;
	}
}

void A(int t){
	try{
		B(t);
	}catch(int i){
		cout<<"catch int exception,i="<<i<<endl;
    }
}

void my_unexpected_func() 
{
	cout<<"my_unexpected_func"<<endl;
}

void my_terminate_func () 
{ 
	cout<<"my_terminate_func"<<endl; 
}  

int main(int argc,char**argv)
{
	int t =0;
	set_unexpected (my_unexpected_func);
	set_terminate(my_terminate_func);
	if(argv[1])
		t = atoi(argv[1]);
	else{
		printf("usage:./%s 0|1|2\n",argv[0]);
		return -1;
	}
	if(t>2){
		printf("usage:./%s 0|1|2\n",argv[0]);
	}
	A(t);
}
