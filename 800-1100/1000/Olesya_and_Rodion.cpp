// https://codeforces.com/problemset/problem/584/A

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10) {
        cout << -1 << '\n';
        return;
    }
    if (t == 10) {
        for (int i = 0; i < n - 1; i++) {
            cout << 1;
        }
        cout << 0 << '\n';
    }
    else {
        for (int i = 0; i < n; i++) {
            cout << t;
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t --) {
        solve();    
    }
}