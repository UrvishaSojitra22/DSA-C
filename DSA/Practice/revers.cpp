#include <iostream>
using namespace std;

main() {
    int number=123456789, reversed = 0;
    	while (number != 0) {
        int digit = number % 10;  
        reversed = reversed * 10 + digit; 
        number /= 10;  
    }
     cout << "Reversed number: " << reversed << endl;
    }
