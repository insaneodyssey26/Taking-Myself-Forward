#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if (i > n) return;
    cout << "Masum" << endl;
    name (i + 1, n);
}

int main () {
    int n; 
    cout << "How many times to print name? ";
    cin >> n;
    name (1, n);
}