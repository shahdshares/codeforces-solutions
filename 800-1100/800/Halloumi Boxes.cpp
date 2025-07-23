// https://codeforces.com/contest/1903/problem/A

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
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector <int> mirror = v;
    sort(v.begin(), v.end());
    if (k > 1) {
        cout << "YES\n";
        return;
    }
    else if (k == 1 && v == mirror) {
        cout << "YES\n";
        return;
    }
    else cout << "NO\n";
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