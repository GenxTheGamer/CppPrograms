#include<iostream>
#include<conio.h>
using namespace std;

class student{
	int count;
	const int constt=0;
	public:
		void display();
};
void student::display(){
	cout<<"Count is 1"<<endl;
	// Will Give error **constt++;** 
	cout<<"Constt is "<<constt;
}

int main(){
	student s;
	s.display();
	getch();
	return 0;
}
