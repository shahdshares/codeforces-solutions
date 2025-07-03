// https://codeforces.com/contest/339/problem/B

#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector <long long> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    long long current = 1, time = 0;
    for (long long i = 0; i < m; i++) {
        if (v[i] >= current) {
            time += v[i] - current;
        }
        else {
            time += n - current + v[i];
        }
        current = v[i];
    }
    cout << time << '\n';
}
