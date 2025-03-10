#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr = 0, int num = 10){ //연결리스트에서 addr와 num은 O(1)
    //cout << "***********Insert Activated***********\n";
    //nunused 주소에 값 입력
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    
    //기존 주소 재설정
    nxt[addr] = unused;
    if(nxt[addr] != -1) pre[nxt[addr]] = unused; //다음 주소지의 pre(이전 주소값)을 unused로 변경
    //마지막 원소의 뒤에 추가되는 상황이라면, 삽입할 위치의 다음 원소가 -1이 된다...?  이거 뭐지...
    unused++; //미사용 주소로 변경
    cout << '\n';
}

void erase(int addr){
    pre[addr]
}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test();
  erase_test();
}