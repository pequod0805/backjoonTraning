#include <bits/stdc++.h>
using namespace std;

stack<pair<int,int>> NGE; //first : value, second : address
int ans[1000005];

int main(){
    ios::sync_with_stdio();
    cin.tie();
    
    int n, k;
    cin >> n;

    for(int i=0;i<=n;i++){

        if(i==n)k=1000001;
        else cin >> k;
        
        while(!NGE.empty() && NGE.top().first < k){
            ans[NGE.top().second] = k;
            NGE.pop();
        }
        NGE.push({k,i});
    }
    for(int i=0; i<n;i++){
        if(ans[i]==1000001) cout << "-1 ";
        else cout<<ans[i]<<" ";
    }
}