// https://codeforces.com/contest/734/problem/A

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    long long n, c_A = 0, c_D = 0;
    cin >> n;
    string game;
    cin >> game;
    for (char c: game) {
        if (c == 'D') c_D ++;
        else c_A ++;
    }
    cout << ((c_A == c_D) ? "Friendship\n" : ((c_A > c_D) ? "Anton\n" : "Danik\n"));
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