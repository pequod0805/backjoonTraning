#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

int empty()
{
    if (tail == head)
        return 1;
    return 0;
}
void push(int x)
{
    dat[tail++] = x;
}
void pop()
{
    if (empty())
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << dat[head] << "\n";
        head++;
    
    }
}
int front()
{
    if (empty())
        return -1;
    return dat[head];
}
int back()
{
    if (empty())
        return -1;
    return dat[tail - 1];
}
int size()
{
    return tail - head;
}
// int main()
// {
//     // 1<=n<=100,000
//     // 0<=h<=1,000,000,000
//     // 마지막 0 입력
//     ios::sync_with_stdio();
//     cin.tie();
//     test();
// }

int main()
{
    ios::sync_with_stdio();
    cin.tie();

    // queue<int> Q;

    int n;
    cin >> n;

    while (n--)
    {
        string c;
        int k;
        // cout << "n : " << n << "\n";
        cin >> c;
        if (c == "push")
        {
            cin >> k;
            push(k);
        }
        else if (c == "front")
            cout << front() << "\n";
        else if (c == "back")
            cout << back() << "\n";
        else if (c == "size")
            cout << size() << "\n";
        else if (c == "empty")
            cout << empty() << "\n";
        else if (c == "pop")
            pop();
    }
}