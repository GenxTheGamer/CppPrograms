#include<iostream>
#include<conio.h>
using namespace std;

class base{
	int a;
	int b;
	int c;
	public:
		void add(int x,int y){
			a=x;
			b=y;
			c=a+b;	
		}
		void display(){
			cout<<"Addition of "<<a<<" and "<<b<< " will be : "<<c<<endl;
		}
};

class inherit1:public base{
	int l,m,n;
	public:
		void sub(int x,int y){
			l=x;
			m=y;
			n=l-m;
		}
		void show(){
			cout<<"Subtraction of "<<l<<" and "<<m<< " will be : "<<n;
		}
};

int main(){
	inherit1 i;
	i.add(2,2);
	i.display();
	i.sub(2,1);
	i.show();
	
	getch();
	return 0;
}
