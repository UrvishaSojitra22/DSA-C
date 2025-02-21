#include <iostream>
using namespace std;

int main() {
    int start = 11,rows = 4,num = start; 
      	for (int i = 1; i <= rows; i++) {  
          for (int j = 1; j <= i; j++) { 
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
