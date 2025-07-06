// https://codeforces.com/problemset/problem/579/A

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << __builtin_popcount(n) << '\n'; // in py : bin(n).count('1')
    // or use __builtin_popcountll(n) for long long integers
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t --) {
        solve();    
    }
}