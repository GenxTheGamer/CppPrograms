#include<iostream>
#include<conio.h>
using namespace std;

class abc{
	int a;
	public:
		abc(){
			cout<<"This is constructor"<<endl;
		}
		abc(int b){
			b=a;
			cout<<"b="<<b<<endl<<endl;
		}
		~abc(){
			cout<<"destructor called"<<endl;
		}
};

int main(){
	abc h;
	{
		abc h1(2);
		abc h3;
	}
	getch();
	return 0;
}
