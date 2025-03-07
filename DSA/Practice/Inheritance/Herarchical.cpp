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
class C:public A{
	public:
	void circle(){
			int r;
			cout<<"Enter Circle Radius :-";
			cin>>r;
			cout<<" Circle Radius :- "<<3.14*r*r<<endl;
					}
};
class D:public A{
	public:
	void sum(){
	int a,b;
	cout<<"Enter no A:-";
	cin>>a;
	cout<<"Enter no B:-";
	cin>>b;
	cout<<"sum :- " <<a+b<<endl;
}
};
main(){
	B b;
	b.age();
	b.triangle();
	
	C c;
	c.age();
	c.circle();
	
	D d;
	d.age();
	d.sum();
	
}
