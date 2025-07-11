// https://codeforces.com/problemset/problem/1999/B

#include <iostream>
#include <cmath> 
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

void solve() {
    int a1, a2, b1, b2, cnt = 0;
    cin >> a1 >> a2 >> b1 >> b2;
    int A[2] = {a1, a2};
    int B[2] = {b1, b2};
    int Apermutations[2][2] = {{A[0], A[1]}, {A[1], A[0]}};
    int Bpermutations[2][2] = {{B[0], B[1]}, {B[1], B[0]}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int winA = 0, winB = 0; 
            if (Apermutations[i][0] > Bpermutations[j][0]) winA++;
            else if (Apermutations[i][0] < Bpermutations[j][0]) winB++;

            if (Apermutations[i][1] > Bpermutations[j][1]) winA++;
            else if (Apermutations[i][1] < Bpermutations[j][1]) winB++;

            if (winA > winB) cnt++;
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