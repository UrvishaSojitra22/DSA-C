#include<iostream>
using namespace std;
class A{
	public:
		void age(){
	int x;
	cout<<"Enter your age";
	cin>>x;
	if(x>=18 && x<=100){
		cout<<"you can vote"<<endl;
	}
	else{
		cout<<"you cant't vote"<<endl;
		}
} 
};
class B:public A{
	public:
	void triangle(){
			int b,h;
			cout<<"Enter triangle base ";
			cin>>b;
			cout<<"Enter triangle height";
			cin>>h;
			cout<<"Triangle Area :- "<<0.5*b*h<<endl;
		}
};
class C{
	public:
	void circle(){
			int r;
			cout<<"Enter Circle Radius :-";
			cin>>r;
			cout<<" Circle Radius :- "<<3.14*r*r<<endl;
					}
};
class D:public B, public C{
	public:
	void myFunction (){
			cout<<"Some content in parent class."<<endl;
		}
};
main(){
	D d;
	d.age();
	d.circle();
	d.triangle();
	d.myFunction();
}

