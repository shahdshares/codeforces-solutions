// https://codeforces.com/contest/381/problem/A

#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    deque <int> dq(v.begin() , v.end());
    int serja = 0, dima = 0, turn = 1;
    while (!dq.empty()) {
        if (turn) {
            if (dq.front() > dq.back()) {
                serja += dq.front();
                dq.pop_front();
            }
            else {
                serja += dq.back();
                dq.pop_back();
            }
        }
        else {
            if (dq.front() > dq.back()) {
                dima += dq.front();
                dq.pop_front();
            }
            else {
                dima += dq.back();
                dq.pop_back();
            }
        }
        turn = !turn;
    }
    cout << serja << ' ' << dima << '\n';
}

// flipping the turn
/*
    turn = 1 - turn
    turn = not turn
    turn = turn ^ 1
    turn = 0 if turn else 0
*/  
