#include<iostream>
#include<conio.h>
using namespace std;

class veh{
	
	public:
	int type;
	int regno;
		void read(){
			cout<<"Enter Registration No: ";
			cin>>regno;
			cout<<"Enter Type: ";
			cin>>type;
		}
		void show(){
			cout<<"Type of Vehicle: "<<type;
			cout<<"\n Registration No: "<<regno<<endl;
		}
};

main(){
	int tax=0;
	veh v[10];
	for(int i;i<11;++i){
		v[i].read();
		if(v[i].type==1){
			tax=tax+50;
		}
		if(v[i].type==2){
			tax = tax+75;
		}
		else(v[i].type==3);{
			tax= tax+100;
		}
	}
	cout<<endl;
	for(int j;j<11;++j){
		v[j].show();
	}
	cout<<endl<<"Total Tax Collected: "<<tax;
	getch();
	return 0;
}
