#include<iostream>
#include<conio.h>
using namespace std;

class abc{
	int a;
	int b;
	public:
		void get(){
			a=10;
			b=20;
		}
		friend int add(abc ob);
};
int add(abc ob){
	cout<<"Addition = "<<ob.a+ob.b;
}

int main(){
	int x;
	abc ob1;
	ob1.get();
	x=add(ob1);
}
