// https://codeforces.com/contest/617/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    int x;
    cin >> x;
    if (x < 6) cout << "1\n";
    else cout << ceil(x / 5.0) << '\n';
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