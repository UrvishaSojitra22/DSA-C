#include <iostream>
using namespace std;
main(){
	int no=7,i;
	int flag=0;
	for(i=2; i<no; i++){
		if(no % i == 0){
			flag=1;
			break;
		}
	}
	if( flag==1){
		cout<<no<<"= no is composite";
	}else{
		cout<<no<<"= no is prime";
	}
}
