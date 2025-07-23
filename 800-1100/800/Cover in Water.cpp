// https://codeforces.com/contest/1900/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long n , c = 0;
    cin >> n;
    string seq;
    cin >> seq;
    if (seq.find("...") != string::npos) {
        cout << "2\n";
        return;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (seq[i] == '.') c++;
        }
    }
    cout << c << '\n';
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