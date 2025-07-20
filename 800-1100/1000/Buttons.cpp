#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    cout << n * (n * n + 5) / 6 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; 
    // cin >> t;
    while(t--) {
        solve();
    }
}