#include<iostream>
#include<conio.h>
using namespace std;

class abc{
	int a;
	int b;
	int c;
	public:
	void get(){
		a=10;
		b=20;
		c=30;
	}
	void display(){
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
	}
};

int main(){
	abc *e=new abc[5];
	e->get();
	int i;
	for(i=0;i<3;i++){
		e->display();
		cout<<endl;
	}
	delete[]e;
	e[3];
	e->display();
	cout<<"garbage value";
	getch();
	return 0;
}
