#include <iostream>
using namespace std;
class Sofa{
public:
	void watchTV(){
		cout<<"watchTV"<<endl;
	}
};
class Bed{
public:
	void sleep(){
		cout<<"sleep"<<endl;
	}
};

class Sofabed:public Sofa,public Bed{
public:
};

int main(int argc,char**argv)
{
	Sofabed sb;
	sb.watchTV();
	sb.sleep();
}
