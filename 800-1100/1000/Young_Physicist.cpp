// https://codeforces.com/problemset/problem/69/A

#include <iostream>
#include <cmath> 
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, sumx = 0, sumy = 0, sumz = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sumx += x; sumy += y; sumz += z;
    }
    if (sumx == 0 && sumy == 0 && sumz == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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