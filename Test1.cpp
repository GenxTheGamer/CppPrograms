#include<iostream>
using namespace std;

void fun(char c='*',int a=1){
	for(int i=1;i<=a;i++){
		cout<<c<<"\n";
}
};
int main()
{
	cout<<"fun without argument"<<endl;
	fun();
	cout<<"fun with one argument"<<endl;
	fun('#');
	cout<<"fun with two argument"<<endl;
	fun('$',5);
}
