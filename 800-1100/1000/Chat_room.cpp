// https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <cmath> 
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string word, target = "hello";
    cin >> word;
    int n = word.size(), i = 0, j = 0;
    while (i < n && j < 5) {
        if (word[i] == target[j]) {
            j ++;
        }
        i ++;
    }
    cout << ((j == 5) ? "YES\n" : "NO\n");
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
