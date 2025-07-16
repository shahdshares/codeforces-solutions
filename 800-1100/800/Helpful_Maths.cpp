// https://codeforces.com/contest/339/problem/A

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    string exp;
    cin >> exp;
    vector <int> v;
    for (int i = 0; i < exp.size(); i++) {
        int number = exp[i] - '0';
        if (number > 0) v.push_back(number);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) cout << v[i];
        else cout << v[i] << "+";
    }
    cout << '\n';
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