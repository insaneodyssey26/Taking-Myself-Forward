class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false; 
        string doubled = s + s; // Concatenate string s with itself
        if (doubled.find(goal) != string::npos) return true; // Check if goal is a substring of the doubled string
        else return false;
    }
};