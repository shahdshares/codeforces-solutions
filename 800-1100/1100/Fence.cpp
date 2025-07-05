// https://codeforces.com/problemset/problem/363/B

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    vector <long long> prfx(n + 1 , 0);
    for (int i = 1; i <= n; i++) {
        prfx[i] = prfx[i - 1] + v[i];
    }
    int min_indx = INT_MAX;
    long long min_sm = LLONG_MAX;
    for (int l = 0, r = k; r <= n; l++, r++) {
        if (prfx[r] - prfx[l] < min_sm) {
            min_sm = prfx[r] - prfx[l];
            min_indx = l;
        }
    }
    cout << min_indx + 1 << '\n';
}

// ------------------------------------------------------

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    vector <long long> prfx(n + 1 , 0);
    for (int i = 1; i <= n; i++) {
        prfx[i] = prfx[i - 1] + v[i];
    }
    int min_indx = INT_MAX;
    long long min_sm = LLONG_MAX;
    for (int l = 0; l <= n - k; l++) {
        int r = l + k;
        if (prfx[r] - prfx[l] < min_sm) {
            min_sm = prfx[r] - prfx[l];
            min_indx = l;
        }
    }
    cout << min_indx + 1 << '\n';
}
