// https://codeforces.com/problemset/problem/158/B

#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x, result = 0;
    cin >> n;
    vector <int> count(5);
    for (int i = 0; i < n; i++) {
        cin >> x;
        count[x]++;
    }
    result += count[4];
    int mn = min(count[1] , count[3]);
    result += count[3];
    count[1] -= mn;
    result += count[2] / 2;
    count[2] %= 2;
    if (count[2]) {
        result += 1;
        count[1] -= min(2 , count[1]);
    }
    result += count[1] / 4;
    if (count[1] % 4) {
        result += 1;
    }
    cout << result << '\n';
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