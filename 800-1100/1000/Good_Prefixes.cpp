// https ://codeforces.com/problemset/problem/1985/C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	int n, cnt = 0;
	cin >> n;
	vector <long long> v(n), prefix_sum(n + 1), prefix_max(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 1; i <= n; i++) {
		prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		prefix_max[i] = max(prefix_max[i - 1], v[i - 1]);
	}
	for (int i = 1; i <= n; i++) {
		if (prefix_sum[i] - 2 * prefix_max[i] == 0) {
			cnt ++;
		}
	}
	cout << cnt << '\n';
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