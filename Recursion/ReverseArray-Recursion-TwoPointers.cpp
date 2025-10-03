#include <bits/stdc++.h>
using namespace std; 

void revArray(vector<int>& arr, int st, int end) {
    if (st >= end) return;
    swap(arr[st], arr[end]);
    revArray(arr, st + 1, end - 1);
}

int main () {
    int n ;
    cout << "Elements? ";
    cin >> n;
    vector<int> arr(n);
    cout << "Gimme " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
        cout << "Real one: ";
        for (auto num: arr) {
            cout << num << " ";
        }
        cout << endl;

        revArray(arr, 0, n - 1);
        cout << "Reversed: " ;
        for (auto num: arr) {
            cout << num << " ";
        }
        cout << endl;
        return 0;
}