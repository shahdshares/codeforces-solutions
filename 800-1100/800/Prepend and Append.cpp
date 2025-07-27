// https://codeforces.com/contest/1791/problem/C

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
    long long n;
    cin >> n;
    string line;
    cin >> line;
    long long l = 0, r = n - 1;
    while (l < r && line[l] != line[r]) {
        l++;
        r--;
    }
    cout << r - l + 1 << '\n';
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