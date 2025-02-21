#include <iostream>
using namespace std;

void age();
main(){
	
	age();
}
void age(){
	int x;
	cout<<"Enter your age";
	cin>>x;
	if(x>=18 && x<=100){
		cout<<"you can vote";
	}
	else{
		cout<<"you cant't vote";
		}
} 
