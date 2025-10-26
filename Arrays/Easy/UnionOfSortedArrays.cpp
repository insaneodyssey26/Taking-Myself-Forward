class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> result;  // result vector to store the union of arrays
        int i = 0, j = 0; // pointers for both arrays
        while (i < a.size() && j < b.size()) { // traverse both arrays
            if (a[i] < b[j]) {
                if (result.empty() || result.back() != a[i]) result.push_back(a[i]);
                i++;
            } // if element of first array is smaller, add it to result, then increment i 
            else if (b[j] < a[i]) {
                if (result.empty() || result.back() != b[j]) result.push_back(b[j]);
                j++;
            } // if element of second array is smaller, add it to result, then increment j
            else {
                if (result.empty() || result.back() != a[i]) result.push_back(a[i]);
                    i++, j++;
            } // if both elements are equal, add any one to result, then increment both i and j
        }
        while (i < a.size()) {
            if (result.empty() || result.back() != a[i]) result.push_back(a[i]);
            i++;
        } // add remaining elements of first array
        while (j < b.size()) {
            if (result.empty() || result.back() != b[j]) result.push_back(b[j]);
            j++;
        } // add remaining elements of second array
        return result; 
    }
}; // Time Complexity: O(m + n), Space Complexity: O(m + n)...
// where m and n are the sizes of the two arrays respectively