// https://codeforces.com/contest/1913/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    string word;
    cin >> word;
    long long c_0 = 0, c_1 = 0, ts = 0;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == '1') c_1 ++;
        else if (word[i] == '0') c_0 ++;
    }
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == '1' && c_0 > 0) c_0 --, ts ++;
        else if (word[i] == '0' && c_1 > 0) c_1 --, ts ++;
        else break; 
    }
    // cout << word.size() - ts << '\n';
    // string answer = "";
    // while ((c_0 || c_1) && i < word.size()) {
    //     if (word[i] == '1') {
    //         if (c_0) {
    //             answer += "0";
    //             c_0 --;
    //         }
    //         else break;
    //     }
    //     else {
    //         if (c_1) {
    //             answer += "1";
    //             c_1 --;
    //         }
    //         else break;
    //     }
    //     i ++;
    // }
    // cout << answer << '\n';
    // cout << c_0 << ' ' << c_1 << '\n';
    // cout << word.size() - answer.size() << '\n';
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