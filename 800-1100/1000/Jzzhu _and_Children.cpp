// // https://codeforces.com/contest/450/problem/A

#include <iostream>
#include <cmath> 
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

void solve() {
    int n, m, x;
    cin >> n >> m;
    deque <pair<int , int>> dq;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        dq.push_back({i , x});
    }
    while (dq.size() > 1) {
        if (m >= dq.front().second) {
            dq.pop_front();
        }
        else {
            dq.front().second -= m;
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }
    cout << dq.front().first << '\n';
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
