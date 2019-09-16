#include<iostream>
#include<conio.h>
using namespace std;

//Abstract Class
/*Explaination: An abstract class is one that is not used to create objects.
It is designed only to act as a base class (to be inherited by other classes.
It is a design concept in program development and provides a base upon which other
classes may be built.
*/

//Pure Virtual Function
/*Explaination: A pure virtual function is a function declared in a base class
that has no definition relative to the base class. Class containing pure virtual
function cannot be used to declare any objects of its own. Such classes are called 
abstract base classes 
*/
class abstract{ //abstract base class.
	public:
		virtual void show()=0;
};

class inherit:public abstract{ // Class inheriting from base class.
	public:
		void show(){ //redefining the function.
			cout<<"This is Pure Virtual Function.";
		}
};

int main(){		//Main Function Starts
	inherit h;	//object of inherited class "inherit"
	h.show();	//function of class "inherit"
	getch();
	return 0;
}
