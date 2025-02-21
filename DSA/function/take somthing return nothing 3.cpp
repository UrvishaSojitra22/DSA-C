#include <iostream>
using namespace std;

void age( int X);
main(){
	int x;
	cout<<"Enter your age: ";
	cin>>x;
	age(x);
}
void age(int x){
	
	if(x>=18 && x<=100){
		cout<<"you can vote";
	}
	else{
		cout<<"you cant't vote";
		}
}
