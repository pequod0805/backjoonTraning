#include <bits/stdc++.h>
using namespace std;

int n[9];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n[9];

    for (int i = 0; i < 9; i++)
        cin >> n[i];

    int a = 0, b = 0;
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            sum = 0;
            swap(a, n[i]);
            swap(b, n[j]);
            for (int k = 0; k < 9; k++)
            {
                sum += n[k];
            }
            if (sum == 100)
                break;

            swap(a, n[i]);
            swap(b, n[j]);
        }
        if (sum == 100)
            break;
    }
    sort(n, n + 9);
    for (int i = 2; i < 9; i++)
        cout << n[i] << '\n';
}
