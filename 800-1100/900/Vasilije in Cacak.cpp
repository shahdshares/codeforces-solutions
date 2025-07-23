// https://codeforces.com/contest/1878/problem/C

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
    if (x >= (k * (k + 1) / 2) && x <= (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2)) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}