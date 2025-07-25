// https://codeforces.com/contest/1857/problem/A

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
    vector <long long> v(n + 1);
    for (int i = 1; i < n + 1; i++) {
        cin >> v[i];
        v[i] += v[i - 1]; 
    } 
    long long last = v[n];
    for (int i = 1; i < n; i++) {
        if (!(v[i] % 2) && !((last - v[i]) % 2)) {
            cout << "YES\n";
            return;
        }
        else if ((v[i] % 2) && ((last - v[i]) % 2)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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