#include <iostream>
using namespace std;
class HumanVirtual{
private:
	int a;
public:
	virtual void eating(void){
		cout<<"eating with hand"<<endl;
	}
};
class Human{
private:
	int a;
public:
	void eating(void){
		cout<<"eating with hand"<<endl;
	}
};

int main(int argc,char**argv){
	Human h;
	HumanVirtual hv;
	cout<<"sizeof(int)="<<sizeof(int)<<endl;
	cout<<"sizeof(int*)="<<sizeof(int*)<<endl;
	cout<<"sizeof(Human h)="<<sizeof(h)<<endl;
	cout<<"sizeof(HumanVirtual hv)="<<sizeof(hv)<<endl;
}
