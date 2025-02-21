#include <iostream>
using namespace std;

main() {
    int a[] = {10, -5, 3, -18, 7, -3, 2,-6,-9,-78},
		n = sizeof(a) / sizeof(a[0]);
    
	cout << "Negative elements in the array are: ";
     for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            cout << a[i] << " ";
        }
    }
}

