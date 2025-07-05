// https://codeforces.com/problemset/problem/476/A

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    bool found = false;
    cin >> n >> m;
    for (int i = ceil(n / 2.0); i <= n; i++) {
        if (i % m == 0) {
            cout << i << '\n';
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "-1\n";
    }
}