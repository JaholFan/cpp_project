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
	friend Point add_friend(Point &p1,Point &p2); //友员
	friend Point operator+(Point &p1,Point &p2);//友员
};

Point add_friend(Point &p1,Point &p2) //普通方法实现的相加
{
	Point p_ret;
	p_ret.x=p1.x+p2.x;
	p_ret.y = p1.y+p2.y;
	return p_ret;
}

Point operator+(Point &p1,Point &p2) //运算符实现的加法
{
	Point n;
	n.x = p1.x + p2.x;
	n.y = p1.y + p2.y;	
	return n;
}

int main(int argc,char** argv)
{
	Point p1(1,2);
	Point p2(3,4);
	Point r = p1+p2;
	r.printXY();
}
