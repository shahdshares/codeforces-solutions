// https://codeforces.com/contest/766/problem/B

#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i + 2 < n; i++) {
        if (v[i] + v[i + 1] > v[i + 2]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}