// https://codeforces.com/contest/1374/problem/B

#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    int cnt3 = 0, cnt2 = 0;

    while (n % 3 == 0) {
        n /= 3;
        cnt3++;
    }
    while (n % 2 == 0) {
        n /= 2;
        cnt2++;
    }

    if (n != 1 || cnt3 < cnt2) {
        cout << "-1\n";
    }
    else {
        cout << (cnt3 - cnt2) + cnt3 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}