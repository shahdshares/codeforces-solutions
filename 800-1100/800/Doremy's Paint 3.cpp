// https://codeforces.com/contest/1890/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <map>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long n, x, c = 0;
    cin >> n;
    map <long long , long long> mp;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (!mp[x]) {
            c ++;
            mp[x] ++;
        }
        else mp[x] ++;
    }
    sort(mp.rbegin(), mp.rend());
    if (c < 3) {
        if (c == 2) {
            if (mp[0] - mp[1] < 2) {
                cout << "Yes\n";
            }
            else cout << "No\n";
        }
        else cout << "Yes\n";
    }
    else cout << "No\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}