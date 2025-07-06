#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     map <int , int> mp;
//     for (int i = 0; i < n; i++) {
//         int x, y;
//         cin >> x >> y;
//         mp[x] = y;
//     }
//     int prev = -1;
//     for (auto it = mp.begin(); it != mp.end(); it++) {
//         if (it->second < prev) {
//             cout << "Happy Alex\n";
//             return;   
//         }
//         prev = it->second;
//     }
//     cout << "Poor Alex\n";
// }

void solve() {
    int n;
    cin >> n;
    map <int , int> mp;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        mp[x] = y;
    }
    int prev = -1;
    for (auto &[a , b] : mp) {
        if (b < prev) {
            cout << "Happy Alex\n";
            return;   
        }
        prev = b;
    }
    cout << "Poor Alex\n";
}

// void solve() {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i].first >> v[i].second;
//     }

//     sort(v.begin(), v.end()); // sort by x - first

//     for (int i = 1; i < n; i++) {
//         if (v[i].second < v[i - 1].second) {
//             cout << "Happy Alex\n";
//             return;
//         }
//     }

//     cout << "Poor Alex\n";
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t --) {
        solve();    
    }
}