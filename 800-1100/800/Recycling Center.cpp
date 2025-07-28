// Problem Link

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>
// #include <cmath>
// #include <deque>
// #include <stack>
// #include <string>
// using namespace std;
// const long long MOD = 1e9 + 7;

// void solve() {
//     long long n, c, incr = 2, coins = 0, curr = -1;
//     cin >> n >> c;
//     vector <long long> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     sort(v.rbegin(), v.rend());
//     auto it = upper_bound(v.begin(), v.end(), c);
//     coins += n - (it - v.begin());
//     int start = it - v.begin();
//     for (int i = start - 1; i >= 0; i--) {
//         if ((i == start - 1) && v[i] <= c) continue;
//         else {
//             curr = i;
//             break;   
//         }
//     }
//     for (int i = curr; i >= 0; i--) {
//         if ((incr * v[i]) > c) coins ++;
//     }
//     cout << coins << '\n';
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t = 1;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
// }

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
