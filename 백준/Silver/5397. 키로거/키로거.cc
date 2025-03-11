#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while (n--){
        string str;
        cin >> str;

        list<char> l = {};//{}추가
        auto it = l.begin();
        
        for(char c : str){
            if(c == '<'){if(it!=l.begin())it--;}
            else if(c == '>'){if(it!=l.end())it++;}
            else if(c == '-'){
                if(it!=l.begin()){
                    it--;
                    it = l.erase(it); // [it =]가 추가됨...왜지?
                }
            }
            else{l.insert(it,c);}
        }
        for(auto k : l) cout << k;
        cout << "\n";
    }
}