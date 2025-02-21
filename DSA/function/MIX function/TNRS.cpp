#include <iostream>
using namespace std;
void age();
main(){
	age();
}  
void age(){
	int x;
	cout<<"Enter your age :-";
	cin>>x;
	if(x>=18 && x<=100){
		cout<<" You can vote ";
	}else{
		cout<<"You can't vote";
	}
}
