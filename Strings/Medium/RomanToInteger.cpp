class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romans = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
                                        {'C',  100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (romans[s[i]] < romans[s[i + 1]]) {
                ans -= romans[s[i]];
            }
            else ans += romans[s[i]];
        }
        return ans;
    }
};