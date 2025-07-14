// https://codeforces.com/problemset/problem/208/A

#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string word = "";
    bool first = true;
    for (int i = 0; i < s.size(); ) {
        if (s.substr(i , 3) == "WUB") {
            if (!word.empty()) {
                if (!first) cout << ' ';
                cout << word;
                word = "";
                first = false;
            }
            i += 3;
        }
        else {
            word += s[i];
            i++;
        }
    }
    if (!word.empty()) {
        if (!first) cout << ' ';
        cout << word;
    }
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