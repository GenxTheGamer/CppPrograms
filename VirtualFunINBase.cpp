#include<iostream>
#include<conio.h>
using namespace std;

class abc{
	public:
	virtual void display(){
		cout<<"this is base class";
	}
};

class pqr:public abc{
	public:
	void display(){
		cout<<"This is derived class";
	}
};

int main(){
	pqr *y;
	abc x;
	y=&x;
	y->display();
	getch();
	return 0;
}
