// https://codeforces.com/contest/1490/problem/C

#include <iostream>
#include <cmath> 

using namespace std;

void solve() {
    long long n;
    cin >> n;
    for (long long a = 1; a * a * a < n; ++a) {
        long long b = n - a * a * a;
        long long rt = (long long)(cbrt(b));
        if (rt * rt * rt < b) rt ++;
        if (rt * rt * rt == b) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}