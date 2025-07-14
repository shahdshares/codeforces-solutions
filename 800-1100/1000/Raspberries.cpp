// https://codeforces.com/contest/1883/problem/C

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    long long d = k - 1, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            cnt ++;
        }
        if (v[i] % k == 0) {
            d = 0;
        }
        else {
            d = min(d, k - (v[i] % k));
        }
    }
    if (k != 4) {
        cout << d << '\n';
    }
    else {
        if (cnt >= 2) {
            cout << "0\n";
        }
        else if (cnt == 1) {
            cout << min(d , 1LL) << '\n';
        }
        else {
            cout << min(d , 2LL) << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}