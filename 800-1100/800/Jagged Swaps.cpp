// https://codeforces.com/problemset/problem/1896/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long n, flag = 0;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    // while (true) {
        // for (int i = 1; i < n - 1; i++) {
        //     if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
        //         swap(v[i] , v[i + 1]);
        //         // flag = 1;
        //     }
        // }
        // if (is_sorted(v.begin(), v.end())) cout << "YES\n";
        // else cout << "NO\n";
        // if (!flag) {
        //     if (is_sorted(v.begin(), v.end())) {
        //         cout << "YES\n";
        //         return;
        //     }
        //     else {
        //         cout << "NO\n";
        //         return;
        //     }
        // }
        // else  {
        //     if (is_sorted(v.begin(), v.end())) {
        //         cout << "YES\n";
        //         return;
        //     }
        // }
    // }
    if (v[0] == 1) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}