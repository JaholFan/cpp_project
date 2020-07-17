#include <iostream>
using namespace std;

class Date {
public:
	Date(){
		cout<<"Date()"<<endl;
	}
};
class Model {
public:
	Model(){
		cout<<"Model()"<<endl;
	}
};

class Furniture { //虚拟基类
public:
	Furniture(){
		cout<<"Furniture()"<<endl;
	}
};

class Sofa : virtual public Furniture{//虚继承
public:
	Sofa(){
		cout<<"Sofa()"<<endl;
	}
	
};
class Bed : virtual public Furniture{ //虚继承
public:
	Bed(){
		cout<<"Bed()"<<endl;
	}
};

class Sofabed:public Sofa,public Bed{
public:
	Model m;
	Date d;
	Sofabed(){
		cout<<"Sofabed()"<<endl;
	}
};

int main(int argc,char**argv)
{
	Sofabed sb;
}
