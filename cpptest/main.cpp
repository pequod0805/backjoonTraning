#include <bits/stdc++.h>
using namespace std;
//짭스텍에서 push이외의 기능은 아웃
const int MX = 1000005; //이번엔 넘어갔지만 원래 길이는 이 이상이 필요...
char dat[MX];
int pos = 0;
//+,- 추가하는 함수
void expush(char x) {
    dat[pos++] = x;
}
//결과를 출력하는 함수
void result() {
    for (int i = 0; i < pos; i++) {
        cout << dat[i] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    stack<int> S;
    int num = 1;

    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        //입력된 값이 더 크다면 가장 큰 값'num'에 추가되는 값만큼 push하면서 +입력
        while (num <= a) {
            S.push(num++);
            expush('+');
        }
        //비어있지 않고 스택의 최대 값이 a라면 없애면서 -추가 
        if (!S.empty() && S.top() == a) {
            S.pop();
            expush('-');
        } else {//이외의 한가지 경우 NO출력 후 종료
            cout << "NO\n";
            return 0;
        }
    }
    //루프 종료된 후 result 출력후 종료
    result();
    return 0;
}
