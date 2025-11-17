class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        vector<int> freq(128, 0); // this will hold frequency of all characters
        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++; // increment frequency of every character
        }
        vector<pair<int, char>> pairs;  // this will hold pairs of (frequency, character)
        for (int i = 0; i < 128; i++) { // 128 because we are considering all ASCII characters
            if (freq[i] > 0) pairs.push_back({freq[i], char(i)}); // char(i) converts ASCII value to character
        }
        sort (pairs.begin(), pairs.end()); // sort pairs based on frequency in ascending order
        reverse (pairs.begin(), pairs.end()); // reverse to get descending order
        for (auto c: pairs) { // for every pair in pairs
            ans.append(c.first, c.second); // c.first means frequency and c.second means character, append them to ans
        }
        return ans;
    }
};