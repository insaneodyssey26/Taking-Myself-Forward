// A primitve parentheses string is a non-empty string that can be represented as "(" + A + ")", where A is a valid parentheses string, or it can be represented as AB, where A and B are valid parentheses strings.
// eg : "(()())(())" -> "()" + "(())" -> "()" + "" = "()()"

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";  // here we will store the answer
        int count = 0, start = 0; 
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') count++; // increment count for opening bracket
            else count--; // decrement count for closing bracket

        if (count == 0) {  // found a primitive
            string primitive = s.substr(start, i - start + 1); // extract the primitive
            ans += primitive.substr(1, primitive.size() - 2); // remove outermost parentheses
            start = i + 1; // update start for next primitive
            }
        }
        return ans;
    }
};