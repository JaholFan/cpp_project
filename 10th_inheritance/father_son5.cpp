#include <iostream>
using namespace std;
class Father{
private:
	int money;
protected:
	int key;
public:
	int age;
	void print(void){
		cout<<"I am Father"<<endl;
	}
};


class Son : public Father{
private:
protected:
public:
	void print(void){
		cout<<"I am Son"<<endl;
	}
};

int main(int argc,char**argv)
{
	Son s;
	s.print();
	s.Father::print();
	cout<<"-------"<<endl;
	Father &f=s;
	f.print();
}
	
