#include <iostream>
using namespace std;
main(){
	int no,i,flag=0;
	cout<<"Enter your no:-";
	cin>>no;
	for(i=2; i<no; i++){
		if(no % i == 0){
			flag=1;
			break;
		}
	}
	if( flag ==1){
		cout<<no<<"=no is composite";
	}else{
		cout<<no<<"= no is prime";
	}
}
