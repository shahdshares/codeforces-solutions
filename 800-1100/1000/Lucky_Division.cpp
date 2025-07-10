// https://codeforces.com/contest/122/problem/A

#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>

using namespace std;

vector <int> lucky;

void generate(int n) {
    if (n > 1000) return;
    if (n != 0) lucky.push_back(n);
    generate(n * 10 + 4);
    generate(n * 10 + 7);
}

void solve() {
    int n;
    cin >> n;
    generate(0);
    // vector <int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    sort(lucky.begin(), lucky.end());
    for (int i = 0; lucky[i] <= n; i++) {
        if (n % lucky[i] == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
