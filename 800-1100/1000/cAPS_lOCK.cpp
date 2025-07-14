// https://codeforces.com/problemset/problem/131/A

#include <iostream>
#include <string>

using namespace std;

void solve() {
    string word;
    cin >> word;
    bool flag1 = true, flag2 = true;
    for (int i = 0; i < word.size(); i++) {
        if (!isupper(word[i])) {
            flag1 = false;
            break;
        }
    }
    for (int i = 1; i < word.size(); i++) {
        if (!isupper(word[i])) {
            flag2 = false;
            break;
        }
    }
    if (flag1) {
        for (int i = 0; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
    }
    else if (flag2) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
    }
    cout << word << '\n';
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