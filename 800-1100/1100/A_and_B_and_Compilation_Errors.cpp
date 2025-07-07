// https://codeforces.com/problemset/problem/519/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n - 1), c(n - 2);

    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;
    for (int& x : c) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    vector<int> diff1, diff2;

    set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(diff1));
    set_difference(b.begin(), b.end(), c.begin(), c.end(), back_inserter(diff2));

    cout << diff1[0] << '\n';
    cout << diff2[0] << '\n';
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}

// ------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long x, sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum1 += x;
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum2 += x;
    }

    for (int i = 0; i < n - 2; i++) {
        cin >> x;
        sum3 += x;
    }

    cout << sum1 - sum2 << '\n';
    cout << sum2 - sum3 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}