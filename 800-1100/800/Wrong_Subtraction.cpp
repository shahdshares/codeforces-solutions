// https://codeforces.com/contest/977/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    while (k) {
        if (n % 10) n -= 1;
        else {
            n /= 10;
        }
        k --;
    }
    cout << n << '\n';
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