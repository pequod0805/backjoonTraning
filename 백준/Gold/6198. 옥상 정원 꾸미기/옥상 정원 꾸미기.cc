#include <bits/stdc++.h>
using namespace std;

stack<int> building;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long ans = 0;
    long long height;
    for(int i=0;i<n;i++){
        cin >> height;
        while(!building.empty()&&building.top() <= height)building.pop();
        ans += building.size();
        building.push(height);
    }
    cout << ans << " ";

    return 0;
}