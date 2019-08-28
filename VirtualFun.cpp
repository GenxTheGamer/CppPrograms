#include<iostream>
#include<conio.h>
using namespace std;

class school{
	public:
	virtual	void display(){
		cout<<"This is base class s_id";
	}
};
class student:public school{
	public:
		void display(){
			cout<<"This is derived class s_id";
		}
};

int main(){
	school *s;
	school sch;
	student *st;
	student stu;
	s=&stu;
	s->display();
	sch.display();
	getch();
	return 0;

}
