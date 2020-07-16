#include <iostream>
using namespace std;
class Sofa{
public:
	int weight;
	void setWeight(int weight){
		this->weight = weight;
	}
	int getWeight(){
		return this->weight;
	}
	void watchTV(){
		cout<<"watchTV"<<endl;
	}
	
};
class Bed{
public:
	int weight;
	void setWeight(int weight){
		this->weight = weight;
	}
	int getWeight(){
		return this->weight;
	}
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
	//sb.setWeight(10); // 错误：二义性
	sb.Bed::setWeight(10); //不是最优的解决办法
}
