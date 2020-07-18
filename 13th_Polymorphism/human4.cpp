#include <iostream>
using namespace std;
class Human{
public:
	virtual  ~Human(){
		cout<<" ~Human()"<<endl;
	}
};

class Chinese:public Human{
public:
	~Chinese(){
		cout<<" ~Chinese()"<<endl;
	}
};

int main(int argc,char**argv){
	Chinese *c = new Chinese();
	Human *h = c;	
	delete h;
}
