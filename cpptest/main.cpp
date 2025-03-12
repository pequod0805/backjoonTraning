#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    list<int> pus;
    list<int> answer;

    for (int i = 1; i <= n; i++)
        pus.push_back(i);

    auto yose = pus.begin();

    while (n--) {
        for (int i = 0; i < k-1; i++) {
            yose++;
            if (yose == pus.end())
                yose = pus.begin();
        }

        answer.push_back(*yose);
        yose = pus.erase(yose);

        if (yose == pus.end())
            yose = pus.begin();
    }

    cout << "<";
    for (auto it = answer.begin(); it != answer.end(); it++) {
        cout << *it;
        if (next(it) != answer.end())
            cout << ", ";
    }
    cout << ">";
}
