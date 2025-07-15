// https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    long long n, k, c = 0;
    cin >> n >> k;
    vector <long long> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] >= v[k] && v[i] > 0) c++;
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