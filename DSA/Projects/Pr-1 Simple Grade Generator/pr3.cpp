#include <iostream>
using namespace std;
main(){
	int marks, number;
	cout << "Enter your Score: ";
	cin>>marks;
	
    // (nested if);
		
	if (marks>=91 && marks <=100) {
		cout << "Your gread is A+, Excellent Work! You are eligible for the next level";
        }if (marks>=81 && marks <=90) {
		   cout << "Your gread is A, Congratulation! You are eligible for the next level";
	     }else {
		    if(marks >=71 && marks<=80){
		    	cout <<"Your gread is B+, You are eligible for the next level";
			}else{
				if(marks >=61 && marks<=70){
					cout << "your gread is B, you are eligible for the next level";
				}else{
					if(marks >=51 && marks<=60){
						cout << "your gread is C, you are eligible for the next level";
					}else{
						if(marks >=41 && marks<=50){
							cout << " Your gread is D, you are eligible for the next level";
						}else{
							if(marks >=31 && marks<=40){
							cout << " Your gread is E, you are eligible for the next level";	
							}else{
							if(marks >=0 && marks<=30){
								cout << " Your gread is f, you are not eligible for the next level";		
								}else{
									cout<<"fail";
								}
							}
						}
					}
				}
			}
	}
}
