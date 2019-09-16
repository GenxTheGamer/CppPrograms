#include<iostream>
#include<conio.h>
using namespace std;

//Function Overriding.
/*Explaination: If derived class defines same function as defined in its base class, 
it is known as function overriding in C++. It is used to achieve runtime polymorphism. 
It enables you to provide specific implementation of the function which is already 
provided by its base class.
*/ 
class base{ //base class
	public:
		void show(){
			cout<<"This is base class."<<endl;
		}
};

class derived:public base{ //derived class
	public:
		void show(){
			cout<<"This is derived class. {Overridden Function}";
		}
};

int main(){ 	//Main Function Starts
	derived h;	//Object of "derived" class
	h.show();   //Calling of show() of "derived" class
	getch();
	return 0;
}
