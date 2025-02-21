#include<iostream>
using namespace std;
int sum(int a,int b);
int min(int a,int b);
main(){
	int a,b;
	cout<<"Enter A:-";
	cin>>a;
	cout<<"Enter B:-";
	cin>>b;
	cout<<"Sum :- "<<sum(a,b)<<endl;
	cout<<"min :- "<<min(a,b);
}
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
}
int min(int a,int b){
	int c;
	c=a-b;
	return c;
}



