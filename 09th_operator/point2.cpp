#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Point{
private:
	int x;
	int y;
public:
	Point(){}
	Point(int x,int y):x(x),y(y){}
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
};

int main(int argc,char** argv)
{
	Point p1(1,2);
	Point p2(3,4);
	Point r = p1+p2;
	r.printXY();
}
