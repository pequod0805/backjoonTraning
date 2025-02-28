#include <bits/stdc++.h>

using namespace std;

bool tag[2000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int tcnum = 0;
    while(n--){
        cin >> tcnum;
        tag[tcnum] = true;
    }
    
    int x;
    cin >> x;   
    int sum = 0;

    for (int i = 1; i <= 1000000; i++)
    {
        if (x - i > 0 && x - i <= 2000000)
        {
            if (tag[i] && tag[x - i]) 
            {
                sum++;
            }
        }
    }
    cout << sum/2;
    return 0;
}