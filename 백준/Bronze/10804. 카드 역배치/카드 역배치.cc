#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int a, b;
    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        int c = a;

            for (c - 1; c < (a + b) / 2 + 1; c++)
                swap(arr[c - 1], arr[b + a - c - 1]);
        
    }
    for (int i = 0; i < 20; i++)
        cout << arr[i] << " ";
}
