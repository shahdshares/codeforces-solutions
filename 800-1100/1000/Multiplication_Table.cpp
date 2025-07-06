// https://codeforces.com/problemset/problem/577/A

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

// void solve() {
//     int n, x;
//     cin >> n >> x;
//     int cnt = 0;
//     for (int i = 1; i <= n; i++) {
//         if (x % i == 0) {
//             if (x / i <= n) {
//                 cnt ++;
//             }
//         }
//     }    
//     cout << cnt << '\n';
// }

void solve() {
    int n, x;
    cin >> n >> x;
    set <int> st;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (i <= n && x / i <= n) {
                st.insert(i); st.insert(x / i);
            }
        }
    }
    cout << st.size() << '\n';
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
