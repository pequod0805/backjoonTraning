#include <bits/stdc++.h>
using namespace std;

int a[1000000];
int ans[1000000];
int main(void) {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];//모든 값을 a[]에 입력?
  stack<int> S;
  for (int i = n - 1; i >= 0; i--) {//뒤에서 부터 반복
    while (!S.empty() && S.top() <= a[i]) S.pop();//이전과 같은 조건...비어있지 않다고 입력된 값보다 더 작다면 pop 
    if (S.empty())//비어있다면 그자리에 -1입력
      ans[i] = -1;
    else
      ans[i] = S.top();//비어있지 않다면 그자리에 Top값을 입력
    S.push(a[i]);//절차상 다음 a의 값을 입력함
  }
  for (int i = 0; i < n; i++) cout << ans[i] << ' ';
}