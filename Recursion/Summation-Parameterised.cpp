#include <bits/stdc++.h>
using namespace std; 

void summation(int i, int sum) {
    if (i < 1) {
        cout << sum << endl;
        return;
    }
    summation (i - 1, sum + i);
}

int main () {
    int n ; 
    cout << "Upto? ";
    cin >> n; 
    summation (n, 0);
}