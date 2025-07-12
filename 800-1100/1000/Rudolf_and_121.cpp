// https://codeforces.com/problemset/problem/1941/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector <long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (long long i = 0; i < n - 2; i++) {
        long long x = v[i];
        if (x < 0) {
            cout << "NO\n";
            return;
        }
        if (v[i + 1] >= 2 * x && v[i + 2] >= x) {
            v[i] -= x;
            v[i + 1] -= 2 * x;
            v[i + 2] -= x;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    for (long long x: v) {
        if (x != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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