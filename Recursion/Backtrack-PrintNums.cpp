#include <bits/stdc++.h>
using namespace std;

void nums(int i, int n) {
    if (i > n) return;

    nums(i + 1, n);
    cout << i << endl;
}

int main () {
    int n ; 
    cout << "Upto what? ";
    cin >> n;
    nums(1, n);
}