#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //대문자, 소문자, 숫자
    //백스페이스, 화살표를 입력
    
    //문자열 1<=L<=1,000,000
    //백스페이스를 입력하면 '-'가 입력
    //화살표 입력시 '<' 또는 '>'가 입력(1씩 이동), 커서의 이동

    //나머지 문자는 비밀번호의 일부이다. 물론, 나중에 백스페이스를 통해서 지울 수는 있다<<??
    //만약 커서의 위치가 줄의 마지막이 아니라면, 커서 및 커서 오른쪽에 있는 모든 문자는 오른쪽으로 한 칸 이동한다.
    
    //이 문제는 배열로 풀면 안되나? : 될 것 같긴 한데 중간에 값이 들어간다는 점에서 값이 추가되면 추가될수록 복잡도 증가 O(n^n)
    //그래서 list로 풀지만 Back Tracking으로 봤을 때 값을 받으면서 움직이는 쪽이 시간이 적게 걸림
    //값을 받으면서 진행

    int n;
    cin >> n;
    while (n--){
        string str;
        cin >> str;

        list<char> l = {};//= {} 추가, 하지만 = {}없이 선언해도 길이가 0이라 문제없을 듯?
        auto it = l.begin();
        
        for(char c : str){
            if(c == '<'){if(it!=l.begin())it--;}
            else if(c == '>'){if(it!=l.end())it++;}
            else if(c == '-'){
                if(it!=l.begin()){
                    it--;
                    it = l.erase(it); // [it =]가 추가됨...왜지? << 이거 때문인 것 같은데
                }
            }
            else{l.insert(it,c);}
        }
        for(auto k : l) cout << k;
        cout << "\n";
    }
}