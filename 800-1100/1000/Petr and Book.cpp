// https://codeforces.com/problemset/problem/139/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void solve() {
    long long n, total = 0;
    cin >> n;
    vector <long long> v(8);
    for (int i = 1; i <= 7; i++) {
        cin >> v[i];
    }
    while (total < n) {
        for (int i = 1; i <= 7; i++) {
            total += v[i];
            if (total >= n) {
                cout << i << '\n';
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; 
    // cin >> t;
    while(t--) {
        solve();
    }
}