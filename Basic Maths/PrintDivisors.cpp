#include<bits/stdc++.h>
using namespace std;
int main () {
    int n; 
    cout << "number? ";
    cin >> n;
    cout << "Divisors: " << endl;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}