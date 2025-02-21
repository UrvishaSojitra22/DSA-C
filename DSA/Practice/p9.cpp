#include <iostream>
using namespace std;
main(){
	 int a=20,b=30,c=40,d=190;
	
	 
	 if(a>b){
		if(a>c){
			if(a>d){
				cout<<"A is max";
			}else{
				cout<<"B is max";
			}
		}else{
			if(c > d){
				cout<<"C is max";
			}else{
				cout<<"D is max";
			}
		}
	 }else{
	 	if(b > c){
	 		if(b > d){
	 			cout<<"B is max";
			 }else{
			 	cout<<"D is max";
			 }
		 }else{
		 	if(c > d){
		 		cout<<"c is max";
			 }else{
			 	cout<<"d is max";
			 }
		 }
	 }
}

