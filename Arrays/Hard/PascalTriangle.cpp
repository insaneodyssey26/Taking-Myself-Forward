class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; // a 2D vector to store the result
        for (int i = 0; i < numRows; i++) { // iterate through each row
            vector<int> rows(i + 1, 1); // create a new row with all elements initialized to 1
            for (int j = 1; j < i; j++) { // this loop fills in the values between the first and last element of the row
                rows[j]= ans[i - 1][j] + ans[i - 1][j - 1]; // each element is the sum of the two elements above it
            }
            ans.push_back(rows); // add the completed row to the result
        }
        return ans;
    }
};