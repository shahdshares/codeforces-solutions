// https://codeforces.com/contest/2065/problem/C1

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    vector <long long> v(n), k(m);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (long long i = 0; i < m; i++) {
        cin >> k[i];
    }
    v[0] = min(v[0] , k[0] - v[0]);
    for (int i = 1; i < n; i++) {
        long long a = v[i], b = k[0] - v[i];
        if (a > b) swap(a , b);
        if (a >= v[i - 1]) {
            v[i] = a;
        }
        else {
            v[i] = b;
        }
    }
    if (is_sorted(v.begin() , v.end())) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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