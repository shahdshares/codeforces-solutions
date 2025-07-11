// https://codeforces.com/contest/231/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y + z > 1) {
            cnt ++;
        }
    }
    cout << cnt << '\n';
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