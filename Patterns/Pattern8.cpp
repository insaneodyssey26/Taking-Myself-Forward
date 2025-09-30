#include<iostream>
using namespace std; 
int main () {
    int n; 
    cout << "rows: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        for (int j = 0; j <= n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
} 