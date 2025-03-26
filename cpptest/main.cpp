#include <bits/stdc++.h>
using namespace std;

stack<pair<int,int>> dwarf;

int main(){
    ios::sync_with_stdio();
    cin.tie();
    
    int n,k;
    cin >> n;

    int ans = 0;
    while(n--){
        int sameheight = 1;
        cin >> k;
        while(!dwarf.empty()){
            if(dwarf.top().first == k){
                sameheight = sameheight + dwarf.top().second;
                dwarf.pop();//pop하고 몇개나 같은 수가 있는지 확인해서 second에 저장해야함
            }else if(dwarf.top().first > k){
                //큰수를 만난다면 사이의 값들은 모두 처리가 끝났을 것이고
                //별로 
                break;
            }else{//dwarf.top().first < k
                ans = ans + dwarf.top().second;//이부분 수정 필요 단순 Ans++가 아닌 연속한 갯수를 가져와 Ans에 추가해야함 즉 이전 원소의 Second값을 가져와서 ans에 추가해야함
                dwarf.pop();//작은 수 count...하지만 작은수가 연속해 있는 경우가 부족
            }
        }
        dwarf.push({k,sameheight});//pair에 push 할 때엔 { }를 통해 first와 second 값을 입력해야 한다.
        
        //정리할 수 있을지 고민...모든 작업은 공통적으로 ans에 sameheight값을 입력해야 함
    }
    cout << "\n" ;
    return 0;
}