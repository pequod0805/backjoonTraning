#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  stack<pair<int, int>> S;
  
  long long ans = 0;// 500,000개의 n이 서로 바라본다면 n^2만으로 250,000,000,000...
  
  while (n--) {
    int h;
    cin >> h;
    int cnt = 1;// 추가되는 사람에 대한 값...
    while (!S.empty() && S.top().X <= h) {//Stack S가 비어있지 않고 && top의 X(키)값이 입력받은 h보다 작거나 같다면
      ans += S.top().Y; // top의 Y값(Y가 뭐지)를 ans에 +=로 입력(더한다)
      if (S.top().X == h) cnt += S.top().Y;// 그런데 이때 top의 X값과 입력된 h의 값이 같다면 top의 Y값을 cnt에 더한다.
      S.pop(); //S값 pop(h보다 top의 X(키)가 작거나 같은 경우)
    }

    if (!S.empty()) ans++;//만약 S가 비어있지 않다면 ans에 1추가
    S.push({h, cnt});//<x,y>에 <h,cnt>를 추가
  }
  cout << ans; //ans 출력
}