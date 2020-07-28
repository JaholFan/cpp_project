#include <iostream>
#include <stdlib.h>
using namespace std;

void B(int t){
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
	}catch(float j){
        cout<<"catch float exception,j="<<j<<endl;
    }catch(...){
        cout<<"catch other exception"<<endl;
    }
}

int main(int argc,char**argv)
{
	int t =0;
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
