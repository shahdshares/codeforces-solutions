// https://codeforces.com/problemset/problem/467/A

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

void solve() {
    long long n, c = 0, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (y - x > 1) c ++;
    }
    cout << c << '\n';
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