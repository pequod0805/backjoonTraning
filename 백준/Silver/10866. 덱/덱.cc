#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

int size()
{
    //cout << "\nSIZE WAS CALLED : \n" << tail-head << '\n';
    return tail - head;
}
int empty()
{
    //cout << "\nEMPTY WAS CALLED\n";
    if (size() < 1)
        return 1;
    else
    {
        return 0;
    }
}
int front()
{
    //cout << "\nFRONT WAS CALLED\n";
    if (empty() == 0)
        return dat[head];
    else
    {
        return -1;
    }
}
int back()
{
    //cout << "\nBACK WAS CALLED\n";
    if (empty() == 0)
        return dat[tail - 1];
    else
    {
        return -1;
    }
}
void push_front(int x)
{
    //cout << "\nPUSH_FRONT WAS CALLED\n";
    dat[--head] = x;
}
void pop_front()
{
    //cout << "\nPOP_FRONT WAS CALLED\n";
    if (empty() == 0)
    {
        cout << dat[head] << '\n';
        head++;
    }
    else
    {
        cout << -1 << '\n';
    }
}
void push_back(int x)
{
    //cout << "\nPUSH_BACK WAS CALLED\n";
    dat[tail++] = x;
}
void pop_back()
{
    //cout << "\nPOP_BACK WAS CALLED\n";
    if (empty() == 0)
    {
        cout << dat[tail-1] << '\n';
        tail--;
    }
    else
    {
        cout << -1 << '\n';
    }
}

int main()
{
    ios::sync_with_stdio();
    cin.tie();

    int n, k;
    string s;

    cin >> n;

    while (n--)
    {
        cin >> s;
        if (s == "front")
            cout << front() << '\n';
        else if (s == "back")
            cout << back() << '\n';
        else if (s == "pop_front")
            pop_front();
        else if (s == "pop_back")
            pop_back();
        else if (s == "push_front")
        {
            cin >> k;
            push_front(k);
        }
        else if (s == "push_back")
        {
            cin >> k;
            push_back(k);
        }
        else if (s == "size")
            cout << size() << '\n';
        else if (s == "empty")
            cout << empty() << '\n';
    }
}