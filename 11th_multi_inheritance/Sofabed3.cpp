#include <iostream>
using namespace std;

class Furniture {
public:
	int weight;
	void setWeight(int weight){
		this->weight = weight;
	}
	int getWeight(){
		return this->weight;
	}
};

class Sofa : virtual public Furniture{//虚继承
public:
	void watchTV(){
		cout<<"watchTV"<<endl;
	}
	
};
class Bed : virtual public Furniture{ //虚继承
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
	sb.setWeight(10); // 错误：二义性
}
