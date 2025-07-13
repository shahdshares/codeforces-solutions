// https://codeforces.com/problemset/problem/1469/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, m, sm_n = 0, sm_m = 0, x, y, prvx = -200, prvy = -200;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> x;
        sm_n += x;
        if (sm_n > prvx) {
            prvx = max(0LL , sm_n);
        }
    }
    cin >> m;
    for (long long i = 0; i < m; i++) {
        cin >> y;
        sm_m += y;
        if (sm_m > prvy) {
            prvy = max(0LL , sm_m);
        }
    }
    cout << prvx + prvy << '\n';
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