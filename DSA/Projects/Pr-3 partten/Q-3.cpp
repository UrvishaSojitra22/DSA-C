#include <iostream>
using namespace std;

int main() {
    int k, n = 5 ; 

    for (int i = n; i >= 1; i--) {
    	for (k=5;k>i;+ k--){
    		 cout << "  ";
		}
        for (int j = 1; j <= i; j++) {
            cout << (j % 2) << " "; 
        }
        cout << endl;
    }

    
}
