// https://codeforces.com/contest/110/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    string n;
    cin >> n;
    long long c = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] - '0' == 7 || n[i] - '0' == 4) c++;
    }
    cout << ((c == 7 || c == 4) ? "YES\n" : "NO\n");
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