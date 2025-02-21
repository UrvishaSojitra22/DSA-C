#include <iostream>
using namespace std;

int main(){
    int no, count = 0;
 cout << "Enter a number: ";
    cin >> no;
 if (no < 0) {
        no = -no; 
    }
 do{
        count++;
        no /= 10; 
    } while (no != 0);
	 cout << "Total number of digits: " 
	 	<< count << endl;
}
