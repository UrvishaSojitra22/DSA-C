#include <iostream>
using namespace std;
main(){
	 int marks;
	cout<<"enter your marks";
	cin>>marks;
	 
	 if(marks>90){
		    cout<<"Your gread is A, Excellent Work"<<endl;
		}else if(marks>75) {
			cout<<"Your gread is B, Well Done"<<endl;
		}else if(marks>60){
			cout<<"Your gread is C, Good Job"<<endl;
		}else if(marks>45){
			cout<<"Your gread is D, you passed"<<endl;
		}else if(marks>30){
			cout<<"Your gread is E, you passed, but you could do better"<<endl;
		}else if(marks>0){
			cout<<"Your gread is f, Sorry, you faild"<<endl;
		}
	
}
