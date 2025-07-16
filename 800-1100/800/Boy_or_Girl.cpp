// https://codeforces.com/contest/236/problem/A

#include <iostream>
#include <string>
#include <set>
using namespace std;

void solve() {
    string word;
    cin >> word;
    set <char> st;
    for (char c: word) {
        st.insert(c);
    }
    cout << ((st.size() % 2 == 0) ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
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