// https://codeforces.com/problemset/problem/133/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string word;
    cin >> word;
    for (char ch: word) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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