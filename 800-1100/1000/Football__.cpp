// https://codeforces.com/problemset/problem/43/A

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    map <string , int> team;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        if (team.find(name) == team.end()) {
            team[name] = 1;
        }
        else {
            team[name] ++;
        }
    }
    int max = INT_MIN;
    string max_team;
    for (auto it: team) {
        if (it.second > max) {
            max = it.second;
            max_team = it.first;
        }
    }
    cout << max_team << '\n';
}

int main() {
    int t = 1;
    // cin >> t;
    while (t --) {
        solve();    
    }
}