#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio();
    cin.tie();

    int n;
    queue<int> Q;
    cin >> n;
    int num = 0;
    while (num < n)
    {
        num++;
        Q.push(num);
    }
    //cout << Q.size() << '\n';
    while (true)
    {
        if (Q.size() == 1)
        {
            cout << Q.front();
            break;
        }
        Q.pop();
        if (Q.size() == 1)
        {
            cout << Q.front();
            break;
        }
        Q.push(Q.front());
        Q.pop();
    }
}