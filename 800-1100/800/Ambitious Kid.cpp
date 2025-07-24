//  https://codeforces.com/contest/1866/problem/A 

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
    long long n, x, mn = LLONG_MAX;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mn = min(mn , abs(x));
    }
    cout << mn << '\n';
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