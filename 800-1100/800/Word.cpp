// https://codeforces.com/contest/59/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    string word;
    cin >> word;
    int cnt_l = 0, cnt_u = 0;
    for (char c: word) {
        if (isupper(c)) cnt_u ++;
        else cnt_l ++;
    }
    if (cnt_u <= cnt_l) {
        for (char c: word) {
            cout << (char)tolower(c);
        }
    }
    else {
        for (char c: word) {
            cout << (char)toupper(c);
        }
    }
    cout << '\n';
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