// https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

void solve() {
    long long n, c = 0, sm1 = 0, sm2 = 0;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sm1 += v[i];
    }
    sort(v.begin(), v.end());
    for(int i = n - 1; i >= 0; i--) {
        if (sm1 - sm2 < sm2) {
            cout << c << '\n';
            return;
        }
        else {
            sm2 += v[i];
            c ++;
        }
    }
    cout << c << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}