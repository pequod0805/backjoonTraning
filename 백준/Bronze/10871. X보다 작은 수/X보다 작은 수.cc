#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a;
    cin >> n >> m;
    for (int i =0; i < n ;i++){
        cin >> a;
        if(a<m){
            cout << a << ' ';
        }
    }
}