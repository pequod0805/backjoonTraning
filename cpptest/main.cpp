#include <bits/stdc++.h>
using namespace std;

//stack<pair<int,int>> dwarf;
stack<int> dwarf;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //문제는 이전 문제들과 동일하게 A와 B지점 사이에 더 큰수가 있으면 안되고, 더 작은 수는 무시한다...로 보면 된다
    //즉 다시 말해 큰수 C 가 있으면 그 뒤는 안바도 된다. 말그대로 이전에 풀었던 다른 문제들과 동일하게
    //내림차순으로 정히라면된다...

    //다만 추가된 점은 그 사이에 동일한 값이 연속해서 나올 때. 예를 들면, 3 1 2 2 2 2 1이라고 치면
    //이전의 값들은 같은 수는 안치기 때문에....아니 근데 그냥 <=로 해버리면 안되나

    int n,k;
    cin >> n;
    int ans = 0;
    while(n--){
        cin >> k;
        int cnt = 1;
        while(!dwarf.empty()&&dwarf.top()<k){
            dwarf.pop();
            cnt++;
        }
        ans = dwarf.size() + cnt + ans;
    }
}