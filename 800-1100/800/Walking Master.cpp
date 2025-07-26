// https://codeforces.com/contest/1806/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (0 <= d - b && 0 <= a + d - b - c) {
        cout << abs(d - b) + abs(a + (d - b) - c) << '\n';
    } else {
        cout << "-1\n";
    }
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