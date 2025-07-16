// https://codeforces.com/contest/41/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    string one, two, translate = "";
    cin >> one >> two;
    for (int i = two.size() - 1; i >= 0; i--) {
        translate += two[i];
    }
    cout << ((translate == one) ? "YES\n" : "NO\n");
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