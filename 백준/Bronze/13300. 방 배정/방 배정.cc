#include <bits/stdc++.h>

using namespace std;

int tag[12];

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCaseNum;
    int outRange;
    cin >> testCaseNum >> outRange;

    while(testCaseNum--){   
        int testCase1, testCase2;
        cin >> testCase1 >> testCase2;
        if(testCase1 == 1){
            tag[testCase2 + 5]++;
        }else{tag[testCase2 - 1]++;}
    }
    int n = 12;
    int sum = 0;
    while(n--){
        if(tag[n]>outRange){
            if(tag[n]%outRange > 0){
                sum += tag[n]/outRange + 1;
            }else{sum += tag[n]/outRange;}
        }else if(tag[n]==0){}
        else{sum++;}
    }
    cout << sum;
    return 0;
}
