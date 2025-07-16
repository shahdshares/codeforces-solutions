// https://codeforces.com/contest/266/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    int n, c = 0;
    cin >> n;
    string line;
    cin >> line;
    for (int i = 0; i < n -1; i++) {
        if (line[i] == line[i + 1]) c++;
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