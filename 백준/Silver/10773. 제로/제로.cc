#include <bits/stdc++.h>
using namespace std;

// const int MX = 1000005;
// int dat[MX];
// int pos = 0;

// int top()
// {
//     if (pos != 0)
//     {
//         return dat[pos - 1];
//     }
//     else
//     {
//         return -1;
//     }
// }
// void push(int x)
// {
//     dat[pos] = x;
//     pos++;
// }
// int pop()
// {
//     if (pos != 0)
//     {
//         pos--;
//         return dat[pos];
//     }
//     else
//     {
//         return top();
//     }
// }
// int size()
// {
//     return pos;
// }
// int empty()
// {
//     if (top() == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// void test(){
//   push(5); push(4); push(3);
//   cout << top() << '\n'; // 3
//   pop(); pop();
//   cout << top() << '\n'; // 5
//   push(10); push(12);
//   cout << top() << '\n'; // 12
//   pop();
//   cout << top() << '\n'; // 10
// }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    stack<int> S;

    // S.push(30);//마지막 추가
    // S.pop();//마지막 제거
    // S.size();//크기 반환
    // if(S.empty()){};//조건()

    for(int i =0; i<k; i++){
        int a = 0;
        cin >> a;
        if(a==0){
            S.pop();
        }else{S.push(a);}

        // string order;
        // cin >> order;
        // if(order == "push"){
        //     int a = 0;
        //     cin >> a;
        //     push(a);
        // }
        // else if(order == "pop"){
        //     cout << pop() << "\n";
        // }
        // else if(order == "top"){
        //     cout << top() << "\n";
        // }
        // else if(order == "size"){
        //     cout << size() << "\n";
        // }
        // else if(order == "empty"){
        //     cout << empty() << "\n";
        // }

    }
    int b = S.size();
    int ans = 0;
    while(b--){
        ans = ans + S.top();
        if(!(S.empty()))S.pop();
    }
    cout << ans;
    // test();
    return 0;
}
