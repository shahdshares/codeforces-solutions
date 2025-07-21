// https://codeforces.com/contest/2065/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

void solve() {
    string word;
    cin >> word;
    for (int i = 0; i < word.size() - 1; i++) {
        if (word[i] == word[i + 1]) {
            cout << "1\n";
            return;
        }
    }   
    cout << word.size() << '\n'; 
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