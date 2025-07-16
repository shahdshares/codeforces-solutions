// https://codeforces.com/contest/263/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    int c, row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> c;
            if (c == 1) {
                row = i; col = j;
                break;
            }
        }
    }
    cout << abs(row - 2) + abs(col - 2) << '\n';
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