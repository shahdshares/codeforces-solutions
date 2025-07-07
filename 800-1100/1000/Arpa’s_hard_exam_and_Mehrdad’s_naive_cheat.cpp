// https://codeforces.com/contest/742/problem/A

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	long long n;
	cin >> n;
	if (n == 0) {
		cout << "1\n";
		return;
	}
	vector <int> v = {8, 4, 2, 6};
	int x = v.size();
	int result = n % x;
	if (result == 0) {
		cout << v[x - 1] << '\n';
	}
	else {
		cout << v[result - 1] << '\n';
	}
}
