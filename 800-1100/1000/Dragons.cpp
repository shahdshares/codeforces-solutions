// https://codeforces.com/problemset/problem/230/A

#include <iostream>
#include <cmath> 
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int s, n, x, y;
    cin >> s >> n;
    vector <pair<int, int>> powers(n);
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        powers[i] = {x , y};
        // cin >> powers[i].first >> powers[i].second;
    }
    sort(powers.begin(), powers.end());
    for (int i = 0; i < n; i++) {
        if (s > powers[i].first) {
            s += powers[i].second;
        } else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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