#include <iostream>
using namespace std;

int age( int X);
main(){
	int x;
	cout<<"Enter your age: ";
	cin>>x;
	age(x)==1 ? cout<<"You can vote" : cout<<"you can't vote";
}
int age(int x){
	
	if(x>=18 && x<=100){
	;
	}
	else{
		return 0;
		}
} 
