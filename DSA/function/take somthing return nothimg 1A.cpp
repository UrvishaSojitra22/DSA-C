#include<iostream>
using namespace std;
void printNo(int start, int end);
main(){
	int start=1,end=9;
	printNo(start,end);
}
void printNo(int start, int end){
	int i=start;
	while(i<=end){
		cout<<"No :-"<<i<<endl;
		i++;
	}
}

