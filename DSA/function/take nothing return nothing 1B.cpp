#include<iostream>
using namespace std;
void min();
void sum();
main(){
	sum();
	min();
}
void sum(){
	int a,b;
	cout<<"Enter no A:-";
	cin>>a;
	cout<<"Enter no B:-";
	cin>>b;
	cout<<"sum :- " <<a+b<<endl;
}
void min(){
	int a,b;
	cout<<"Enter no A:-";
	cin>>a;
	cout<<"Enter no B:-";
	cin>>b;
	cout<<"sum :- " <<a-b<<endl;
}
