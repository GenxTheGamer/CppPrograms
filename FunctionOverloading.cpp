#include<iostream>
#include<conio.h>
using namespace std;

class abc{
	int a;
	int b;
	int c;
	
	public:
		void fun(){
			a=5;
			b=10;
			c=5;
		}
		void fun(int x){
			a=b=c=x;
		}
		void fun(int x,int y){
			a=x;
			b=c=y;
		}
		void fun(int x, int y, int z){
			//a=x;
			//b=y;
			//c=z;
		}
		void sum(){
			int d;
			d=a+b+c;
			cout<<d<<endl;
		}
};
int main(){
	abc e;
	e.fun();
	e.sum();
	e.fun(10);
	e.sum();
	e.fun(10,20);
	e.sum();
	e.fun(10,20,30);
	e.sum();
	getch();
	return 0;
}
