#include <iostream>
using namespace std;

int main() {
    int n = 5; 

    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << (j % 2) << " "; 
        }
        cout << endl;
    }

    
}
