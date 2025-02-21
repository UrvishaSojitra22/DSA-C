#include <iostream>
using namespace std;
main(){
	int marks, number;
	cout << "Enter your Score: ";
	cin>>marks;
	
	// (Ternary operatore) ;
	
	(marks>=91 && marks <=100) 
		? cout << " Your Grade is A+" 
		: 	(marks>=81 && marks<=90) 
					?cout << "Your Grade is A" 
						:(marks>=71 && marks<=80) 
							? cout<< "Your Gread is B+"
								:(marks>=61 && marks<=70) 
								? cout<< "Your Gread is B"
									:(marks>=51 && marks<=60) 
										? cout<< "Your Gread is C"
										:(marks>=41 && marks<=50) 
										? cout<< "Your Gread is D"
										:(marks>=31 && marks<=40) 
										? cout<< "Your Gread is E"
					 					: cout<<" fail ";
	}
