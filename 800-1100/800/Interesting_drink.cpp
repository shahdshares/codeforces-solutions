#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long d;
    cin >> d;
    while (d --) {
        long long x;
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);
        cout << (it - v.begin()) << '\n';
    }
}