// https://codeforces.com/problemset/problem/1840/C

#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>

using namespace std;

// int binary_search(vector <int>& a, int q) {
//     int l = 0, r = a.size() - 1, mid, answer = -1;
//     while (l <= r) {
//         mid = l + (r - l) / 2;
//         if (a[mid] <= q) {
//             answer = mid;
//             l = mid + 1;
//         }
//         else {
//             r = mid - 1;
//         }
//     }
//     return answer;
// }

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long cnt = 0, subarr = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= q) {
            cnt ++;
        }
        else {
            if (cnt >= k)
            subarr += (cnt - k + 1) * (cnt - k + 2) / 2;
            cnt = 0;
        }
    }
    if (cnt >= k)
        subarr += (cnt - k + 1) * (cnt - k + 2) / 2;
    cout << subarr << '\n';
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