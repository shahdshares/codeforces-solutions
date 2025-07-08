// https://codeforces.com/problemset/problem/467/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	long long n, m, k;
	cin >> n >> m >> k;
	vector <int> v(m + 1);
	for (int i = 0; i < m + 1; i++) {
		cin >> v[i];
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		int current = v[i] ^ v[m];
		if (__builtin_popcount(current) <= k) {
			cnt ++;
		}
	}
	cout << cnt << '\n';
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