#include<iostream>
#include<conio.h>
using namespace std;

class test{
	int x;
	public:
		test(){
			x=10;
		}
		int &retref(){
		return x;
		}
		void display(){
			cout<<"x= "<<x<<endl;
		}
};
int main(){
	test t;
	t.retref();
	t.display();
	int &z=t.retref();
	z=50;
	t.display();
	getch();
	return 0;
}
