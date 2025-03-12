#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 사람 N명, 양의 정수 K<=N
    // K번째 사람을 제거하고 남은 인원들로 이루어진 원
    // 1명이 남을때까지 반복
    // 이때 원에서 사람이 제거되는 순서를(N,K)-요세푸스 순열? : 나무위키 ㄱ
    //(7,3)-요세푸스 = <3,6,2,7,5,1,4>
    // 최초 3 -> 6?? 3 + 3 + 3...의 순서대로 마지막 한명 남을 때까지 척살하는 문제
    int n, k;
    cin >> n >> k;
    list<int> pus;
    list<int> answer;
    for (int i = 1; i != n + 1; i++)
    {
        pus.push_back(i);
    }
    // k는 고정값
    // yose가 회차마다 k만큼 큰수를 봐야함
    // 문제 1 : yose는 int가 아닌 auto로 생성한 주소값 : yose:iterator + k:int가 불가능 = for문을 통한 yose++?...너무 큰데 n(n+2), n<=5000, 2.5초?
    auto yose = pus.begin();

    while (n--)
    { // O(n)
        for (int i = 0; i < k - 1; i++)
        {
            yose++;
            if (yose == pus.end())
            {
                yose = pus.begin();
                // cout << "reset\n";

                // cout << "pus : ";
                // for (auto p : pus)
                //     cout << p << " ";
                // cout << "\n";
            }
            // cout << "+ ";
        } // 초과값에 대한 처리 추가
        // cout << "*yose : "<< *yose << "....value of the pointing node\n" ; // 7이후에 3을 보네? 왜지? 1 제거 됬으니 2주소부터 234 해서 4 다음 <56갔다가 7없으니 1을 봐야하는데 3을 봄>...3이 살았나?
        // cout << ": number of k \n";
        //  cout << *yose << " ";
        //  cout << "\n";
        // cout << "pus : ";
        // for (auto p : pus)
        //     cout << p << " ";
        // cout << "\n";

        answer.push_back(*yose);

        // cout << "answer : ";
        // for (auto a : answer)
        //     cout << a << " ";
        //  입력된 값은 삭제...인데 작동 안함
        //  if (yose == pus.begin())
        //  {
        //      yose = pus.erase(--pus.end());//yose가 begin일 경우
        //  }else if(yose == --pus.end()){
        //      pus.pop_back();
        //      yose = pus.end();
        //  }else{
        yose = pus.erase(yose); // yose가 end일 경우도 추가?????????? << 여기부터 3-6(7이후 넘어가서 2회)-2-7(마지막을 지우고...이후엔?
        // }
        if (yose == pus.end())
            yose = pus.begin(); // 언럭키 연결리스트 구현

        // cout << "\n+++++++++++++++roop count +++++++++++++++\n\n";
    }
    cout << "<";
    for (auto it = answer.begin(); it != answer.end(); it++)
    {
        cout << *it;
        if (next(it) != answer.end()) // 마지막 원소가 아닐 때만 ", " 추가
            cout << ", ";
    }
    cout << ">";
    // 예상 O(n(k+2))? 2초 n=5000,5000^2 = 25,000,000 = 2.5초? 2천5백만?
}

// 문제는 주소가 최초 혹은 최후였다면 추가적인 로직이 필요할 것이다 라고 생각했지만...
// 그런거 필요없다