// https://codeforces.com/contest/1881/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long n, m, i = 0, c = 0;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    for (int i = 6; i >= 1; i--) {
        if (x.find(s) != string::npos) {
            cout << c << '\n';
            return;
        }
        x += x;
        c ++;
    }
    cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
