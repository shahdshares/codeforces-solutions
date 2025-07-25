// https://codeforces.com/contest/1873/problem/C

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <deque>
#include <stack>
#include <string>
using namespace std;
const long long MOD = 1e9 + 7;

void solve() {
    long long result = 0;
    // vector <vector<int>> v(10 , vector<int>(10));
    int grid[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            char c;
            cin >> c;
            if (c == 'X') result += grid[i][j];
        }
    }
    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}

/*
for _ in range(int(input())):
    l=[]
    for i in range(10):
        l.append(input())
    s=0    
    for i in range(10):
        for j in range(10):
            if l[i][j]=="X":
                s+=min(i+1,j+1,10-i,10-j)
    print(s)            
*/