#include <bits/stdc++.h>
using namespace std;

stack<int> building;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long ans = 0;
    int height;
    for(int i=0;i<n;i++){
        cin >> height;
        while(!building.empty()&&building.top() <= height)building.pop();//내림차순으로 정리 (10, 3, 7)같이 중간에 낀 빌딩을 제외
        ans += building.size();//나를 볼 수 있는 빌딩의 수
        building.push(height);
    }
    cout << ans << " ";

    return 0;
}