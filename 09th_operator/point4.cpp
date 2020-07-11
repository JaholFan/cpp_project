#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Point{
private:
	int x;
	int y;
public:
	Point(){
		cout <<"construct Point()"<<endl;
	}
	Point(int x,int y):x(x),y(y){
		cout <<"construct Point(int x,int y):x(x),y(y)"<<endl;
	}
	void printXY(){
		cout<<"X:"<<this->x<<" Y:"<<this->y<<endl;
	}

	Point operator+(Point &p1)
	{
		Point n;
		cout<<"this->x="<<this->x<<" this->y="<<this->y<<endl;
		cout<<"p1.x="<<p1.x<<" p1.y="<<p1.y<<endl;
		n.x = p1.x + this->x;
		n.y = p1.y + this->y;	
		return n;
	}

	Point operator++()
	{
		this->x = this->x + 1;
		this->y = this->y + 1;
		return *this;
	}
	Point operator++(int b)
	{
		Point n = *this;
		this->x += 1;	
		this->y += 1;	
		return n;
	}
};



int main(int argc,char** argv)
{
	Point p(1,2);
	cout<<"before++: p=";
	p.printXY();
	Point ret = p++;
	cout<<"after++: p=";
	p.printXY();
	cout<<"ret = ";
	ret.printXY();
}
