// Print this pattern for the given number of rows.
//   *      *
//   **    **
//   ***  ***
//   ********
//   ********
//   ***  ***
//   **    **
//   *      *
#include <iostream>

using namespace std;

int main() {
    int n; 
    cout << "Enter number of rows in each half of the butterfly: " <<endl;
    cin >> n;

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >=1; i--) { //same as above just i=n here, i>=1 and i--
    
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
