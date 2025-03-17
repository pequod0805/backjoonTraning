#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pos = 0;

void expush(char x) {
    dat[pos++] = x;
}

void result() {
    for (int i = 0; i < pos; i++) {
        cout << dat[i] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    stack<int> S;
    int num = 1;

    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;

        while (num <= a) {
            S.push(num++);
            expush('+');
        }

        if (!S.empty() && S.top() == a) {
            S.pop();
            expush('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    result();
    return 0;
}