#include <iostream>
#include <stdlib.h>
using namespace std;

class Exception{
public:
	void print(void){
		cout<<"Exception"<<endl;
	}
};
class SubException{
public:
	void print(void){
		cout<<"SubException"<<endl;
	}

};
void B(int t){
	if(t == 0){
		throw Exception();
	}else if(t == 1){
		throw SubException();
	}
}

void A(int t){
	try{
		B(t);
	}catch(SubException &e){
		e.print();
    }catch(Exception &e){
        e.print();
    }
}

int main(int argc,char**argv)
{
	int t;
	if(argv[1])
		t = atoi(argv[1]);
	else{
		printf("usage:./%s 0|1\n",argv[0]);
		return -1;
	}
	if(t>1){
		printf("usage:./%s 0|1\n",argv[0]);
	}
	A(t);
}
