#include <bits/stdc++.h> // #include <list>
using namespace std; // C++ std에 list 포함

int main(void) {
  list<int> L = {1,2}; // [1]↔[2] : STL list 선언

  list<int>::iterator t = L.begin(); // t는 1을 가리키는 중
  
  L.push_front(10); // [1]↔[2] -> [10]↔[1]↔[2]
  cout << *t << '\n'; // t가 가리키는 값 = 1을 출력
  
  L.push_back(5); // [10]↔[1]↔[2]↔[5]
  
  L.insert(t, 6); // t가 가리키는 곳 앞에 6을 삽입, [10]↔[6]↔[1]↔[2]↔[5]
  t++; // t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
  
  t = L.erase(t); // t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환 [10]↔[6]↔[1]↔[5], t가 가리키는 값은 5
  //이때 커서의 개념에서는 erase는 커서가 위치한 값의 -1값이기 때문에 Null Check : if(it != body.begin()) 이후 body.erase(prev(it))로 접근해야함
  cout << *t << '\n'; // 5
  
  for(auto i : L) cout << i << ' ';
  cout << '\n';
  
  for(
    list<int>::iterator it = L.begin(); 
    //list의 iterator(주소)가 L(List)의 .begin(시작 값)으로 설정
    it != L.end(); 
    // it(주소 변수)가 L(List)의 .end(마지막)값이 아니라면 = L의 주소값이 마지막 까지
    it++) { //it(주소 변수)가 1씩 증가
      cout << *it << ' ';//it의 포인터 주소 값이 가르키는 값(실제 값)을 출력
    }
}