// https://codeforces.com/problemset/problem/499/B

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map <string, string> mp;
	for (int i = 0; i < m; i++) {
		string x, y;
		cin >> x >> y;
		mp[x] = y;
	}
	vector <string> lecture (n);
	for (int i = 0; i < n; i++) {
		cin >> lecture[i];
	}
	for (int i = 0; i < n; i++) {
		if (lecture[i].size() <= mp[lecture[i]].size()) {
			cout << lecture[i] << ' ';
		}
		else {
			cout << mp[lecture[i]] << ' ';
		}
	}
	cout << '\n';
}