// https://codeforces.com/contest/479/problem/A

#include <iostream>
#include <cmath> 
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int result1 = a + b * c;
    int result2 = a * (b + c);
    int result3 = a * b * c;
    int result4 = (a + b) * c;
    int result5 = a * b + c;
    int result6 = a + b + c;
    vector <int> v = {result1, result2, result3, result4, result5, result6};
    int mx = *max_element(v.begin(), v.end());
    cout << mx << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}