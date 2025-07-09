#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int l = 0, r = n - 1, alice = 0, bob = 0;
    while (l < r) {
        if (bob <= alice) {
            bob += v[l++];
        }
        else {
            alice += v[r--];
        }
    }
    if (bob == alice) {
        cout << (l + r + 1) << '\n';
    }
    else {
        cout << "0\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}