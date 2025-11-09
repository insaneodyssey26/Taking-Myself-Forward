class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = ""; // empty answer string
        int size = strs.size() - 1; // size of the array of strings
        sort (strs.begin(), strs.end()); // sort the array of strings
        string st = strs[0], end = strs[size]; // first and last strings of the array after sorting
        for (int i = 0; i < st.size(); i++) { // traverse through the characters of the first string
            if (st[i] != end[i]) return ans; //  // if character of first and last string don't match, return the answer
            ans += st[i]; // else add the character to the answer string
        }
        return ans;
    }
};