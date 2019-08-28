#include<iostream>
#include<conio.h>
using namespace std;

//base class
class basec{
	public:
		void display(){
			cout<<"This is base class.";
	}
};

//sub class
class subc:public basec{
	public:
		virtual void display(){
			cout<<"This is virtual";
	}
};

//main function
int main(){
	basec *ba;
	subc sa;
	ba=&sa;
	ba->display(); //returns "This is base class."
	sa.display(); //returns "This is virtual"
	return 0;
	
}
