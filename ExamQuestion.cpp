#include<iostream>
#include<conio.h>
using namespace std;

struct Date{
	int day;
	char month[4];
	int year;
};

class employee{
	private:
		int eno;
		char ename[25];
		struct Date dob,doj;
		float salary;
		public:
			void read(){
				cout<<"Enter Details";
				cout<<"\n"<<"Enter No: ";
				cin>>eno;
				cout<<"\n"<<"Enter Name: ";
				cin>>ename;
				cout<<"\n"<<"Enter Salary: ";
				cin>>salary;
				cout<<"\n"<<"Enter Dob: ";
				cout<<"\n"<<"Day: ";
				cin>>dob.day;
				cout<<"\n"<<"Month: ";
				cin>>dob.month;
				cout<<"\n"<<"Year: ";
				cin>>dob.year;
				cout<<"\n"<<"Enter Doj: ";
				cout<<"\n"<<"Day: ";
				cin>>doj.day;
				cout<<"\n"<<"Month: ";
				cin>>doj.month;
				cout<<"\n"<<"Year: ";
				cin>>doj.year;
			}
			void display(){
				cout<<eno;
				cout<<ename;
				cout<<salary;
				cout<<dob.day;
				cout<<dob.month;
				cout<<dob.year;
				cout<<doj.day;
				cout<<doj.month;
				cout<<doj.year;
			}
};

int main(){
	employee emp;
	emp.read();
	emp.display();
}
