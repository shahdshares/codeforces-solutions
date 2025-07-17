// https://codeforces.com/problemset/problem/2126/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    int x, digit, mn = INT_MAX;
    cin >> x;
    while (x) {
        digit = x % 10;
        mn = min(mn , digit);
        x /= 10;
    }
    cout << mn << '\n';
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