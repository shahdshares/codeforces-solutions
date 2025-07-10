// https://codeforces.com/contest/1690/problem/D

#include <iostream>
#include <cmath> 
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, k, white = INT_MAX;
    cin >> n >> k;
    string line;
    cin >> line;
    vector <int> prefix(n);
    prefix[0] = ((line[0] == 'W') ? 1 : 0);
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + (line[i] == 'W');
    }
    for (int i = 0; i <= n - k; i++) {
        int cnt = prefix[i + k - 1] - (i == 0 ? 0 : prefix[i - 1]);
        if (cnt < white) {
            white = cnt;
        }
    }
    cout << white << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}