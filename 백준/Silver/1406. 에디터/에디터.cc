#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //'커서' : 문자열 중간에서 편집 = 리스트
    //소문자만 기록 (-'a') 
    //600,000 = 야매 리스트 사용 가능 하지만 STL list 사용 예정
    //문자열이 주어지고 명령어가 차례로 주어짐
    //명령어를 수행하고난 뒤 편집기의 문자열을 구하는 프로그램
    //명령어 수행전 커서는 문장의 맨뒤에 위치하고 있음

    //문자열은 영어 소문자 n<100,000
    //명령어 1<=M<=500,000
    string str;
    cin >> str;
    list<char> body = {};
    for(char c : str) body.push_back(c); //O(n) << 이미 아웃(반드시 필요?)
    
    //이동 시작
    int n;
    cin >> n;
    list<char>::iterator it = body.end();//'커서' 생성 및 맨 뒤로 이동
    for(int i=0;i<n;i++){
        //L = 커서 왼쪽 이동.
        //D = 커서 오른쪽 이동.
        //B = 커서 왼쪽의 문자를 삭제함(커서가 맨앞이라면 무시)[BackSpace].
        //P$ = 문자를 왼쪽에 추가함.
        char command;
        cin >> command;
        if(command == 'L'){if(it!=body.begin())it--;}//이전 주소값으로 이동
        else if(command == 'D'){if(it!=body.end())it++;}//다음 주소값으로 이동
        //else if(command == 'B'){if(it!=body.begin())body.erase(it);}//현재 주소값 삭제        
        else if(command == 'B') {
            if(it != body.begin()) { //Null Check
                it = body.erase(prev(it)); //이전 위치로 이동 후 삭제 : 커서의 시점
            }
        }
        else if(command == 'P'){//현재 주소에 추가//
            char newChar;
            cin >> newChar;
            body.insert(it, newChar);
        }
        else{break;}
        //cout << "k";
    }
    for(list<char>::iterator it = body.begin();it!=body.end();it++) cout << *it;
}