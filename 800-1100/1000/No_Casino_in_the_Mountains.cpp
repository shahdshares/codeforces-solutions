// https://codeforces.com/problemset/problem/2126/B

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    long long n, k, c = 0;
    cin >> n >> k;
    vector <int> v(n), prfx(n + 1);
    prfx[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        
    }
    for (int i = 0; i < n; i++) prfx[i + 1] = prfx[i] + v[i];
    for (int i = 0; i <= n - k;) {
        if (prfx[i + k] - prfx[i] == 0) {
            c ++;
            i += (k + 1);
        }
        else {
            i ++;
        }
    }
    cout << c << '\n';
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