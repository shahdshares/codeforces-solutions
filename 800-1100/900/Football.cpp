// https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string team;
    cin >> team;
    cout << (team.find("1111111") != string::npos || team.find("0000000") != string::npos ? "YES" : "NO") << '\n';
}
