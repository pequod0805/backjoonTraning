#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //사람 N명, 양의 정수 K<=N
    //K번째 사람을 제거하고 남은 인원들로 이루어진 원
    //1명이 남을때까지 반복
    //이때 원에서 사람이 제거되는 순서를(N,K)-요세푸스 순열? : 나무위키 ㄱ
    //(7,3)-요세어쩌구 = <3,6,2,7,5,1,4>
    //최초 3 -> 6?? 3 + 3 + 3...의 순서대로 마지막 한명 남을 때까지 척살하는 문제
    int n, k;
    cin >> n >> k;
    list<int> pus;
    auto yose = pus.begin();
    list<int> answer;
    for(int i=1;i!=n+1;i++) pus.insert(yose,i); yose++; // 리스트 생성
    //k는 고정값
    //yose가 회차마다 k만큼 큰수를 봐야함
    //문제 1 : yose는 int가 아닌 auto로 생성한 주소값 yose + k는 불가능
    //문제 2 
    while(n--){
        for(int i=0;i<k;i++) yose++;//다만 원형 연결리스트 이기 때문에 overflow에 대한 처리 추가 필요
        answer.push_back(*yose)
    }
}