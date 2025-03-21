#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N;
stack<pair<int, int>> tower; // stack<pair>구조 tower생성

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    tower.push({100000001, 0}); // {100,000,001, 0}을 tower의 0에 추가 [100,000,001은 height의 최대값이 100,000,000이기 때문]
    for (int i = 1; i <= N; i++)
    {
        int height;
        cin >> height;
        while (tower.top().X < height)
        { // 새로 입력된 높이(height)와 Top의 X(기존의 가장큰 높이)를 확인해서
            //cout << "\n\n[" << tower.top().X << ", " << tower.top().Y << "] was popped\n\n";
            //cout << "If the new height is bigger then 'tower.top().X', So this X : [" << tower.top().X << ", " << tower.top().Y << "] will be pop()\n";
            tower.pop();
        } 
        cout << tower.top().Y << " ";
        //cout << "[" << tower.top().X << ", " << tower.top().Y << "]"; // 왼쪽의 타워중 Y(tower의 위치를 출력함)
        tower.push({height, i});      // 최 상단 값(역대 최대 높이)를 위치에 대한 정보를 싫어서 전달
    }
}