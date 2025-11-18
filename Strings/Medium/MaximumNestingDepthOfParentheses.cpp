class Solution {
public:
    int maxDepth(string s) {
        int currDepth = 0, maxDepth = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') currDepth++; // if opening bracket, increase current depth
            if (s[i] == ')') currDepth--; // if closing bracket, decrease current depth
            if (maxDepth < currDepth) maxDepth = currDepth; // update maxDepth if current depth is greater
        }
        return maxDepth;
    }
}; // this was an easy one, idk why it's marked medium in tuf
// time complexity: O(n), space complexity: O(1)