// https://codeforces.com/problemset/problem/580/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

void solve() {
    long long n, c = 1, mx = 1;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n - 1; i++) {
        if (v[i + 1] >= v[i]) {
            c ++;
            mx = max(mx , c);
        }
        else c = 1;
    }
    cout << mx << '\n';
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