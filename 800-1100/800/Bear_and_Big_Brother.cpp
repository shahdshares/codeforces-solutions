// https://codeforces.com/contest/791/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    long long a, b, c = 0;
    cin >> a >> b;
    while (a <= b) {
        a *= 3; b *= 2;
        c ++;
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