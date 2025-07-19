// https://codeforces.com/contest/349/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void solve() {
    int n, x, cnt25 = 0, cnt50 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 25) cnt25++;
        else if (x == 50) {
            if (cnt25 == 0) {
                cout << "NO\n";
                return;
            }
            cnt25--;
            cnt50++;
        }
        else { 
            if (cnt50 > 0 && cnt25 > 0) {
                cnt50--;
                cnt25--;
            }
            else if (cnt25 >= 3) {
                cnt25 -= 3;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; 
    // cin >> t;
    while(t--) {
        solve();
    }
}
