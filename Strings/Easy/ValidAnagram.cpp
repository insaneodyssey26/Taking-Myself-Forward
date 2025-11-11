// Using one frequency array
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> freq(26, 0); // frequency array to count occurrences of each character
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++; // increment count for character in string s
            freq[t[i] - 'a']--; // decrement count for character in string t
        } 
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] != 0) return false; // if any count is not zero, strings are not anagrams
        }
        return true;
    }
};

// Using two frequency arrays
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        vector<int> freqS(26, 0); // frequency array for string s
        vector<int> freqT(26, 0); // frequency array for string t

        for (int i = 0; i < s.size(); i++) {
            freqS[s[i] - 'a']++;  // increment count for character in string s
            freqT[t[i] - 'a']++;  // increment count for character in string t
        }
        return freqS == freqT; // if both frequency arrays are equal, strings are anagrams
    }
};
                  