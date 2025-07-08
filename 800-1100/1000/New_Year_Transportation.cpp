// https://codeforces.com/problemset/problem/500/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	int n, t, current = 1;
	cin >> n >> t;
	vector <int> v(n);
	for (int i = 1; i < n; i++) {
		cin >> v[i];
	}
	while (current < t) {
		current += v[current];
	}
	if (current == t) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
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