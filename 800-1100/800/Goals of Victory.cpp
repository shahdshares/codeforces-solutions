// https://codeforces.com/contest/1877/problem/A

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
    long long n, total = 0;
    cin >> n;
    vector <long long> v(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> v[i];
        // if (v[i] & 1) o ++;
        // else e ++;
        total += v[i];
    }
    cout << -total << '\n';
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