// https://codeforces.com/problemset/problem/1692/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;
    if (b > a) cnt ++;
    if (c > a) cnt ++;
    if (d > a) cnt ++;
    cout << cnt << '\n';
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