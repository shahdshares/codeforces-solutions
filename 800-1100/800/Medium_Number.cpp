// https://codeforces.com/problemset/problem/1760/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    vector <long long> v = {a, b, c};
    sort(v.begin(), v.end());
    cout << v[1] << '\n';
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