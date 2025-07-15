// https://codeforces.com/contest/282/problem/A

#include <iostream>
#include <string>
using namespace std;

void solve() {
    long long n, c = 0;
    cin >> n;
    string exp;
    for (int i = 0; i < n; i++) {
        cin >> exp;
        if (exp.find("++") != string::npos) c ++;
        else if (exp.find("--") != string::npos) c --;
    }
    cout << c << '\n';
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