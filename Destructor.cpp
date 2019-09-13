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
			a=b;
			cout<<"b="<<b<<endl<<endl;
		}
		~abc(){
			cout<<"destructor called"<<endl;
		}
};

int main(){
	abc h4(6);
	
		abc h1(2);
		abc h2(3);
		abc h3;
	getch();
	return 0;
	
}

