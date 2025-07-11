// https://codeforces.com/contest/546/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long k, n, w, result = 0;
    cin >> k >> n >> w;
    result = k * (w * (w + 1) / 2) - n;
    // cout << (result > 0 ? result : 0) << '\n';
    cout << max(0LL, result) << '\n';
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