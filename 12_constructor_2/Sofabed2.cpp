#include <iostream>
using namespace std;

class Sofa{
public:
	int s;
	Sofa(int s):s(s){
		this->s = s;
		cout<<"this->s="<<this->s<<endl;
	}
};
class Bed {
public:
	int b;
	Bed(int b):b(b){
		cout<<"this->b="<<this->b<<endl;
	}
};

class Sofabed:public Sofa,public Bed{
public:
	int sb;
	Sofabed(int sb,int s,int b):sb(sb),Sofa(s),Bed(b){
		cout<<"this->sb="<<this->sb<<endl;
	}
};

int main(int argc,char**argv)
{
	Sofabed sb(1,2,3);
}
