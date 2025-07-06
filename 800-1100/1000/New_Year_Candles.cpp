// https://codeforces.com/problemset/problem/379/A

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int cnt_b = 0, cnt_cndls = 0, cnt_curr = cnt_cndls;
    while (a) {
        cnt_cndls ++;
        cnt_curr ++;
        if (cnt_curr == b) {
            cnt_b ++;
            cnt_curr = 1;
        }
        a --;
    }
    cout << cnt_cndls + cnt_b << '\n';
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