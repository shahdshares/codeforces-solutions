// https://codeforces.com/problemset/problem/124/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	cout << n - max(a + 1 , n - b) + 1 << '\n';
}