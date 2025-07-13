// https://codeforces.com/problemset/problem/1791/E

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, mx = 0, mn = LLONG_MAX, cnt_neg = 0;
    cin >> n;
     vector <long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mx += abs(v[i]);
        if (abs(v[i]) < mn) {
            mn = abs(v[i]);
        }
        if (v[i] < 0) cnt_neg ++;
    }
    if (cnt_neg % 2 == 0) {
        cout << mx << '\n';
    }
    else {
        cout << mx - 2 * mn << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}