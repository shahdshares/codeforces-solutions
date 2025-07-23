// https://codeforces.com/contest/1901/problem/A

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
    long long n, x, q, prev = 0, last;
    cin >> n >> x;
    vector <long long> v;
    for (int i = 0; i < n; i++) {
        cin >> q;
        v.push_back(q - prev);
        prev = q;
        last = q;
    }
    v.push_back(2 * (x - last));
    long long mx = *max_element(v.begin(), v.end());
    cout << mx << '\n';
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << ' ';
    // }
    // cout << '\n';
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