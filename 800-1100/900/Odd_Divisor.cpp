// https://codeforces.com/problemset/problem/1475/A

#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n % 2 != 0) {
        cout << "YES\n";
        return;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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