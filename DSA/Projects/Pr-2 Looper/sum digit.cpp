#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit;
	cout << "Enter a number: ";
    cin >> number;
	lastDigit = number % 10;

    
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
	int sum = firstDigit + lastDigit;
	
	cout << "Sum of first and last digits: " << sum << endl;

    
}
