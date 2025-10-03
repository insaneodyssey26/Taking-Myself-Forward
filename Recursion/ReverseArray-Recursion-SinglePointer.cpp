#include <bits/stdc++.h>
using namespace std;

void revArray(int i, vector<int>& arr, int n) {
    if (i >= n/2) return;
    swap (arr[i], arr[n - i -1]);
    revArray(i + 1, arr, n);
}

int main () {
    int n; 
    cout << "Array size? ";
    cin >> n;
    vector<int> arr(n);
    cout << "Elements? " ;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Real: ";
    for (auto num: arr) {
        cout << num << " ";
    }

    cout << endl;

    revArray(0, arr, n);
    cout << "Reversed: ";
    for (auto num: arr) {
        cout << num << " ";
    }
}