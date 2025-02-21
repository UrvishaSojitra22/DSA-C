#include <iostream>
using namespace std;
main(){
	int marks, number;
	cout << "Enter your Score: ";
	cin>>marks;
	
	if (marks >= 90) {
       number=1;
    	} else if (marks>=70){
        number=2;
   		}else if(marks>=60){
    	number=3;
		}else if(marks>=45){
		number=4;
		}else if(marks>=30){
		number=5;
		}else if(marks>=0){
		number=6;
		}
			switch(number) {
       			case 1:
           			cout << "Your gread is A,Excellent work." << endl;
            	break;
        		case 2:
            		cout << "Your gread is B,congratulation." << endl;
           		break;
		        case 3:
		            cout << "Your gread is C,Well Done." << endl;
            	break;
        		case 4:
            		cout << "Your gread is D,Good Job." << endl;
            	break;
        		case 5:
            		cout << "Your gread is E,Yoy passed, But you could do better" << endl;
           		break;
        		case 6:
            		cout << "Your gread is F,please try again next time" << endl;
            	break;   
    }
}
