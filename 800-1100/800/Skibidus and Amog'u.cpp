// https://codeforces.com/contest/2065/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

void solve() {
    string word;
    cin >> word;
    int n = word.size();
    for (int i = 0; i < n - 2; i++) {
        cout << word[i];
    }
    cout << 'i' << '\n';
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