#include<iostream>
#include<conio.h>
using namespace std;


class student{
	protected:
		int roll_no;
	public:
		void get_number(int a){
			roll_no=a;
		}
		void put_number(){
			cout<<"Roll No: "<<roll_no<<endl;
		}
};

class test: virtual public student{
	protected:
		int marks;
	public:
		void get_marks(int b){
			marks=b;
		}
		void put_marks(){
			cout<<"Marks :"<<marks<<endl;
		}
};

class sports: virtual public student{
	protected:
		float score;
	public:
		void get_score(int c){
			score=c;
		}
		void put_score(){
			cout<<"Score: "<<score<<endl;
		}
};

class result: public test, public sports{
	float total;
	public:
		void display(){
			total=marks+score;
			put_number();
			put_marks();
			put_score();
			cout<<"Total Result: "<<total<<endl;
		}
};

int main(){
	result res;
	res.get_number(113);
	res.get_marks(23);
	res.get_score(34.5);
	res.display();
	getch();
	return 0;
}


