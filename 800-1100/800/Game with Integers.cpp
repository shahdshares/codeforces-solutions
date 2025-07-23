// https://codeforces.com/problemset/problem/1899/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long n, turn = 1;
    cin >> n;
    for (int i = 10; i >= 1; i--) {
        if (turn) {
            int incr = min(n % 3 , 3 - n % 3);
            if (incr == n % 3 && incr != 0) {
                n --;
                if (n % 3 == 0) {
                    cout << "First\n";
                    return;
                }
            }
            else if (incr == 3 - n % 3) 
            {
                n ++;
                if (n % 3 == 0) {
                    cout << "First\n";
                    return;
                }
            }
            else n --;
        }
        else {
            n ++;
        }
        turn ^= 1;
    }
    cout << "Second\n";
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