#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        string brackets;
        cin >> brackets;
        stack<char> stk;
        int cnt_opn = 0, cnt_cls = 0;
        for (char ch: brackets) {
            if (ch == '(') {
                stk.push(ch);
                cnt_opn ++;
            }
            else if (ch == ')'){
                if (!stk.empty() && stk.top() == '(') {
                    stk.pop();
                    cnt_opn --;
                }
                else {
                    cnt_cls ++;
                }
            }
        }
        int result = min(cnt_opn, cnt_cls);
        cout << result << '\n';
    }
}