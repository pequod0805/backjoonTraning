#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long i, n, j;
    cin >> i >> n;
    if (i > n) swap(i, n);
    if (i == n || n - i == 1) cout << 0;
    else
    {
        cout << (n - i - 1) << "\n";
        for (j = i + 1; j < n; j++)
        {
            cout << j << " ";
        }
    }
}
