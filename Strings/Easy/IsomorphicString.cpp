class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS; // an unordered map to store the mapping of characters from string s to string t
        unordered_map<char, char> mapT; // this one's to store from t to s
        for (int i = 0 ; i < s.length(); i++) { // traverse through the characters of both strings, one loop is enough because both strings are of same length
            if (mapS.find(s[i]) != mapS.end()) { // if the character from string s is already mapped
                if (mapS[s[i]] != t[i]) { // check if it maps to the same character in string t
                    return false; // if not, return false
                }
            }
            else if (mapT.find(t[i]) != mapT.end()) { // if the character from string t is already mapped
                if (mapT[t[i]] != s[i]) { // check if it maps to the same character in string s
                    return false; // if not, return false
                }
            }
            else {
                mapS[s[i]] = t[i]; // if the characters are not mapped yet, create the mapping in both maps
                mapT[t[i]] = s[i]; // to ensure one-to-one mapping
            }
        }
        return true;
    }
};