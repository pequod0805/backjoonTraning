#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    int y = 0;
    int m = 0;
    cin >> a;
    for (int i =0; i<a; i++){
        cin >> b;
        y += 10*((b / 30) + 1);
        m += 15*((b / 60) + 1);
    }
    if(y>m) {cout << 'M' << " " << m;}
    else if(m>y) {cout << 'Y' << " " << y;}
    else {cout << "Y M " << y;}
}
