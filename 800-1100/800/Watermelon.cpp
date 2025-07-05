// https://codeforces.com/problemset/problem/4/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n == 2 || n%2 != 0) ? "NO\n" : "YES\n");
}