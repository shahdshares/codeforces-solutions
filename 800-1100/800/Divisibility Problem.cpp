// https://codeforces.com/contest/1328/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long a, b;
    cin >> a >> b;
    cout << (!(a % b) ? 0 : b - a % b) << '\n';
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