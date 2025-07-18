// https://codeforces.com/problemset/problem/1141/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << "-1\n";
        return;
    }

    long long x = m / n;
    int c = 0;

    // while (x % 2 == 0) {
    //     x /= 2;
    //     c++;
    // }

    // while (x % 3 == 0) {
    //     x /= 3;
    //     c++;
    // }

    while (x % 2 == 0 || x % 3 == 0) {
        if (x % 2 == 0) x /= 2;
        else if (x % 3 == 0) x /= 3;
        c++;
    }


    if (x != 1) cout << "-1\n";
    else cout << c << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; 
    // cin >> t;
    while(t--) {
        solve();
    }
}
