// https://codeforces.com/contest/1853/problem/A

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
    long long n;
    int gap = 1e9 + 10;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    if (!is_sorted(v.begin(), v.end())) cout << "0\n";
    else {
        // long long curr = ceil((v[n - 1] + v[n - 2]) / 2.0);
        // curr = ((curr == ceil(curr)) ? curr + 1 : ceil(curr));
        // cout << ((curr - v[n - 1]) ? (curr - v[n - 2]) : 1) << '\n';
        for (int i = 0; i < n - 1; i++) gap = min(gap, v[i + 1] - v[i]);
        cout << (int)floor(gap / 2.0) + 1 << '\n';
    }
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