#include<iostream>
#include<conio.h>
using namespace std;

class thing{
	int code;
	int price;
	public:
		thing(){
			code=1;
			price=50;
		}
		thing(int c){
			code=c;
			price=100;
		}
		thing(int co,int p){
			code=co;
			price=p;
		}
		void display(){
			cout<<"Code: "<<code<<endl;
			cout<<"Price: "<<price<<endl;
		}
};
int main(){
	thing t;
	t.display();
	thing t1(2);
	t1.display();
	thing t2(3,150);
	t2.display();
	getch();
	return 0;
}
