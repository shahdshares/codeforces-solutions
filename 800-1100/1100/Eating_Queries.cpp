// https://codeforces.com/problemset/problem/1676/E

#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, q;
    cin >> n >> q;
    vector <long long> v(n), prefix(n + 1);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    } 
    sort(v.rbegin(), v.rend());
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }
    while (q --) {
        long long x;
        cin >> x;
        long long l = 0, r = n, mid, answer = -1;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (prefix[mid] >= x) {
                answer = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << answer << '\n';
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