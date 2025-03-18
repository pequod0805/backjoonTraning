#include <bits/stdc++.h>
using namespace std;

const int MX = 500005;
int dat[MX] = {};
int num = 0;

void push(int a){
    dat[num] = a;
    num++;
}

int searchTarget(int target){ // a는 신규 원소
    
    int searchingNum = num;
    //cout << "dat[a] : " << dat[a] <<"\n";

    while(searchingNum--){
        
        if(dat[searchingNum] > target){
            //cout << "trarget : " << target <<"\n";
            //cout << "return dat[searchingNum] : " << dat[searchingNum] <<"\n";
            return searchingNum + 1;
        }
    }
    //cout << "return 0\n";
    return 0;
}

// void getdatList(){
//     cout << "[";
//     for(int i =0; i< num-1; i ++){
//         cout << dat[i] << ", ";
//     }
//     cout << dat[num-1] << "]\n";
// }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //일직선 위의 n개의 높이가 다른 타워
    //방향은 항상 우 -> 좌 >> pop?
    int n;
    cin >> n;
    
    int newTowerLength = 0;
    while(n--){
        cin >> newTowerLength;
        push(newTowerLength);
        //getdatList();
        cout << searchTarget(newTowerLength) << " ";// idx = 원소
        //cout << "\n";
        //idx++;
    }
    return 0;
}// 지금은 N log n...O(2N)은 넘겠네