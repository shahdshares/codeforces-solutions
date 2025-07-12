// https://codeforces.com/problemset/problem/766/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    string one, two;
    cin >> one >> two;
    cout << ((one == two) ? (int)-1 : (int)max(one.size() , two.size())) << '\n';
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