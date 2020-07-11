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
	void setX(int x){
		this->x = x;
	}
	void setY(int y){
		this->y = y;
	}
	int getX(){
		return this->x;
	}
	int getY(){
		return this->y;
	}
	void printXY(){
		cout<<"X:"<<this->x<<" Y:"<<this->y<<endl;
	}
	friend Point add_friend(Point &p1,Point &p2);
};

Point add_way1(Point &p1,Point &p2)
{
	Point p_ret;
	p_ret.setX(p1.getX()+p2.getX());
	p_ret.setY(p1.getY()+p2.getY());
	return p_ret;
}

Point add_friend(Point &p1,Point &p2)
{
	Point p_ret;
	p_ret.x=p1.x+p2.x;
	p_ret.y = p1.y+p2.y;
	return p_ret;
}

int main(int argc,char** argv)
{
	Point p1(1,2);
	Point p2(3,4);
	Point sum1 = add_way1(p1,p2);
	Point sum2 = add_friend(p1,p2);
	sum1.printXY();
	sum2.printXY();
}
