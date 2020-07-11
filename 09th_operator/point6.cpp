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
	void printXY() const{
		cout<<"X:"<<this->x<<" Y:"<<this->y<<endl;
	}

	Point& operator=(Point &p){
		this->x = p.x;
		this->y = p.y;
		return *this;
	}

};



int main(int argc,char** argv)
{
	Point p1(1,2);
	Point p2 = p1;
	p1.printXY();
	p2.printXY();
}
