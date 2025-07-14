// https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

void solve() {
    string word;
    cin >> word;
    for (int i = 0; i < word.size(); i++) {
        if (i) {
            cout << word[i];
        }
        else {
            cout << (char)toupper(word[i]);
        }
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