// https://codeforces.com/contest/1814/problem/A

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
    long long n, k;
    cin >> n >> k;
    long long x = 2, y = k;
    // if (n == k) {
    //     cout << "YES\n";
    //     return;
    // }
    // if (!(n & 1)) cout << "YES\n";
    // else {
    //     if (!(n % k)) cout << "YES\n";
    //     else if (2 + k == n) cout << "YES\n";
    //     else {
    //         while (x <= n && y <= n) {
    //             if ((n - x) % y == 0) {
    //                 cout << "YES\n";
    //                 return;
    //             }
    //             else if ((n - y) % x == 0) {
    //                 cout << "YES\n";
    //                 return;
    //             }
    //             x *= 2; y *= k;
    //         }
    //         cout << "NO\n";
    //     }
    // }
    // ACC
    
    // if (!(n & 1) || k % 2 == 1) {
    //     cout << "YES\n";
    //     return;
    // }
    // else if (k > n) {
    //     cout << "NO\n";
    //     return;
    // }
    // else {
    //     cout << (((n - k) % 2 == 0) ? "YES\n" : "NO\n");
    // }
    for (int i = 0; i < 2; i++) {
        if ((n - i * k) >= 0 && (n - i * k) % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
