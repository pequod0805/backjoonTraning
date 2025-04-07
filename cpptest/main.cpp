#include <bits/stdc++.h>
using namespace std;

deque<int> deq;
int location[55];

int main(){
    ios::sync_with_stdio();
    cin.tie();
    
    int n,m,k;
    cin >> n >> m;
    int answer = 0;
    for (int i=1;i<=n;i++) deq.push_front(i);
    //n=10, m=3
    //k는 뽑으려는 수의 위치, k=[1,2,3], k의 갯수는 m
    while(n--){
        cin >> k;
        if(k){
            while
        }

        answer++;
    }

    //첫 번째 연산 = a1을 pop = pop_front
    //왼쪽 이동 연산 = a1을 pop하고 해당 수를 = ak뒤에 push_back
    //오른쪽 이동 연산 = ak를 pop하고 해당 수를 = a1앞에 push_front
}