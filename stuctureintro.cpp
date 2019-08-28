#include<iostream>
#include<cstring>
using namespace std;
struct student
{
	int age;
	char name[30];
	float marks;
};
int main()
{
	student s1,s3;
	cout<<"Enter Details \n";
	cin>>s1.age>>s1.name>>s1.marks;
	cout<<"Your details were: \n";
	cout<<s1.age;
	cout<<"\n"<<s1.name;
	cout<<"\n"<<s1.marks;
	
	student s2={10,"Vaibhav",231};
	cout<<s2.age<<s2.name<<s2.marks;
	
	s3=s2;
	cout<<s3.age<<s3.name<<s3.marks;
	
	return 0;
}
