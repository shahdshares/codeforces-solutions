// http://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <cmath> 
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string word;
    cin >> word;
    int n = word.size();
    for (int i = 0; i < n; i++) {
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'Y' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
            continue;
        }
        else {
            cout << '.' << (char)tolower(word[i]);
        }
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