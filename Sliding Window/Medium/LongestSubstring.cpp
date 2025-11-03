class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash (128, -1);
        int st = 0, maxLen = 0;
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] >= st) {
                st = hash[s[i]] + 1;
            }
            hash[s[i]] = i;
            maxLen = max(maxLen, i - st + 1);
        }
        return maxLen;
    }
};