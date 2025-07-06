// https://codeforces.com/problemset/problem/368/B

#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector <int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    set <int> st;
    for (int i = n; i >= 1; i--) {
        st.insert(v[i]);
        v[i] = st.size();
    }

    while (m --) {
        int pstn;
        cin >> pstn;
        // set <int> st;
        // for (int i = pstn; i <= n; i++) {
        //     st.insert(v[i]);
        // }
        // cout << st.size() << '\n';

        // Answer in O(1) time
        cout << v[pstn] << '\n';
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while (t --) {
        solve();    
    }
}