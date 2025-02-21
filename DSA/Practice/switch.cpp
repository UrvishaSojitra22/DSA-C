#include <iostream>
using namespace std;
main(){
	int choice;
	cout<<" Enter press 1 order pizza :-" <<endl;
	cout<<" Enter press 1 order sandwitch :-" <<endl;
	cout<<" Enter press 1 order Burger :-" <<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Order pizza";
		break;
		case 2:
			cout<<"Order sandwitch";
		break;
		case 3:
			cout<<"Order Burger";
		break;
	}
}
