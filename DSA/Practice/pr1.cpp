#include <iostream>
using namespace std;
main(){
	 int marks;
	cout<<"enter your marks";
	cin>>marks;
	  if(marks>90){
		    cout<<"Your gread is A,Excellent Work, you are aligible for the next level;"<<endl;
		}else if(marks>75) {
			cout<<"Your gread is B,Well Done, you are aligible for the next level"<<endl;
		}else if(marks>65){
			cout<<"Your gread is C,Good Job,you are aligible for the next level"<<endl;
		}else if(marks>55){
			cout<<"Your gread is D,you passed,you are aligible for the next level"<<endl;
		}else if(marks>40){
			cout<<"Your gread is E,you passed, but you could do better,you are aligible for the next level"<<endl;
		}else if(marks>0){
			cout<<"Your gread is f,please try again next time"<<endl;
		}
	
}
