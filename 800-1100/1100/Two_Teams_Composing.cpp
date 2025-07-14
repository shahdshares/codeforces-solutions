// https://codeforces.com/problemset/problem/1335/C

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

void solve() {
    long long n, max_freq = -1;
    cin >> n;
    vector <long long> v(n);
    set <long long> st;
    map <long long , long long> mp;
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) st.insert(v[i]);
    for (auto a: v) mp[a] ++;
    // for (int i = 0 ...)
    for (auto [key , value]: mp) max_freq = max(max_freq , value);
    // for (auto it = mp.begin(); it != mp.end(); it++) max_freq = max(max_freq , it->second);
    if (n == 1) {
        cout << "0\n";
    }
    else if (n == st.size()) {
        cout << "1\n";
    }
    else {
        cout << (((long long)st.size() == max_freq) ? max_freq - 1 : min(max_freq, (long long)st.size())) << '\n';
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