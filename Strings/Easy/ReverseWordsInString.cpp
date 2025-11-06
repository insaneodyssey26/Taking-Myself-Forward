class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = ""; // final answer string
        reverse(s.begin(), s.end()); // reverse the entire string first
        for (int i = 0; i < n; i++) {
            string word = ""; // to store each word
            while (i < n && s[i] == ' ') i++; // skip spaces
            while (i < n && s[i] != ' ') {
                word += s[i]; // add characters to the word
                i++; // move to the next character
            }
            reverse(word.begin(), word.end()); // reverse each word to restore original order
            if (word.length() > 0) { // if word is not empty
                if (ans.length() > 0) ans += " "; // if answer is not empty, it means we need to add a space before adding new word
                ans += word; // add the word to the final answer
            }
        }
        return ans;
    }
};