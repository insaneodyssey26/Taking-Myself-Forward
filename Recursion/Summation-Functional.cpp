#include<bits/stdc++.h>
using namespace std;

int summation (int n) {
    if (n < 1) return 0;
    else return n + summation (n - 1);
}

int main () {
    int n ; 
    cout << "Upto? ";
    cin >> n;
    cout << summation(n) << endl;
}