// https://codeforces.com/contest/1858/problem/A

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
    long long a, b, c, turn;
    cin >> a >> b >> c;
    if (c & 1) {
        if (b <= a) cout << "First\n";
        else cout << "Second\n";
    }
    else {
        if (a <= b) cout << "Second\n";
        else cout << "First\n";
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