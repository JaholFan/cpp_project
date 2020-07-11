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

	friend ostream& operator<<(ostream &o,Point &p);

};
ostream& operator<<(ostream &o,Point &p){
	cout<<"X:"<<p.x<<" Y:"<<p.y<<endl;
	return o;
}



int main(int argc,char** argv)
{
	Point p(1,2);
	cout<<p<<endl;
}
