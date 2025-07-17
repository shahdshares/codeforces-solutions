// https://codeforces.com/problemset/problem/1030/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void solve() {
    int n, x, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        c ++;
    }
    if (c > 0) cout << "EASY\n";
    else cout << "HARD\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; 
    // cin >> t;
    while(t--) {
        solve();
    }
}
