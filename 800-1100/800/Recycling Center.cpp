// https://codeforces.com/contest/2128/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> k(n);
        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }
        vector<int> v(n);
        for (int i = 0, j; i < n; i++) {
            if (k[i] > c) continue;
            j = 0;
            while ((k[i] << (j + 1)) <= c) j++;
            v[i] = j + 1;
        }
        sort(v.begin(), v.end());

        int cnt = 0;
        for (auto &it: v) {
            cnt += (it > cnt);
        }
        cout << n - cnt << '\n';
    }
    return 0;
}
