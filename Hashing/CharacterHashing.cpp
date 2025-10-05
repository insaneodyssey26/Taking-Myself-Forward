#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}

// this is only for lower case letters a-z
// for upper case letters A-Z, use hash[26] = {0}; and hash[s[i] - 'A']++;
// for both lower case and upper case letters, use hash[256] = {0}; because it contains all ASCII characters, total 256
// Just change the size of the hash array size from 26 to 256 and use hash[s[i]]++; 
// then there's no need to do s[i] - 'a' or s[i] - 'A', just use s[i] directly as the index of the hash array.