#include<bits/stdc++.h>
using namespace std; 

int cnt = 0;
void basecase() {
    if (cnt == 5) return;
    cout << cnt << endl;
    cnt++;
    basecase();
}

int main () {
    basecase();
}