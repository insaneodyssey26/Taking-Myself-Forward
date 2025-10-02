#include<bits/stdc++.h>
using namespace std;
// int main () {
//     int n; 
//     cout << "number? ";
//     cin >> n;
//     cout << "Divisors: " << endl;

//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             cout << i << endl;
//         }
//     }
// }  // T.C : O(n)

int main () {
    int n; 
    cout << "num? "; 
    cin >> n;
    cout << "divisors: " << endl;

    for (int i = 1; i <= n*n ; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
        if (n / i == i) {
            cout << i << endl;
        }
    }
} // T.C : O(sqrt(n)) ... Because when divisors start repeating when n/i becomes = i .. Tai ektu better O(n) er theke