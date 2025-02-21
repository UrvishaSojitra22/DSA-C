#include<iostream>
using namespace std;

int sum();
int min();

main(){
	cout<<"sum :- "<<sum()<<endl;
	cout<<"min :- "<<min()<<endl;

}
int sum(){
	int a,b,c;
	cout<<"Enter A :-";
	cin>>a;
	cout<<"Enter B :-";
	cin>>b;
	c=a+b;
	return c;
}
int min(){
	int a,b,c;
	cout<<"Enter A :-";
	cin>>a;
	cout<<"Enter B :-";
	cin>>b;
	c=a-b;
	return c;	
}
