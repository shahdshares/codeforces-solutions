// https://codeforces.com/problemset/problem/313/B

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void solve() {
    string line;
    cin >> line; // getline(cin , line);
    int n = line.size();
    vector <int> v(n , 0);
    for (int i = 0; i < n - 1; i++) {
        if (line[i] == line[i + 1]) {
            v[i] = 1;
        }
        else {
            v[i] = 0;
        }
    }
    for (int i = 1; i < n - 1; i++) {
        v[i] += v[i - 1];
    }
    int m;
    cin >> m; 
    while (m --) {
        int l, r;
        cin >> l >> r;
        l --; r --; 
        cout << ((l == 0) ? v[r - 1] : v[r - 1] - v[l - 1]) << '\n';
    }
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