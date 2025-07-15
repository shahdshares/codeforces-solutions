// https://codeforces.com/contest/71/problem/A

#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    long long c = 0;
    cin >> s;
    if (s.size() > 10) {
        cout << s[0];
        for (int i = 1; i < s.size() - 1; i++) {
            c ++;
        }
        cout << c << s[s.size() - 1] << '\n';
    }
    else cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}