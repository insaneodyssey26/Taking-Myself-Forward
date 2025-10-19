// Sorting approach (complexity - O(n log n))

#include <bits/stdc++.h>
using namespace std;

int sortArray(vector<int>& arr) {
    sort (arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main () {
    vector<int> arr = {3, 5, 7, 2, 8};
    cout << "The largest element is: " << sortArray(arr) << endl;
    return 0;
}

// Optimized approach (complexity - O(n))

#include <bits/stdc++.h>
using namespace std;
int findLargestElement(vector<int>& arr) {
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}