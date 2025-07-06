#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0) {
            if (x / i <= n) {
                cnt ++;
            }
        }
    }    
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t --) {
        solve();    
    }
}