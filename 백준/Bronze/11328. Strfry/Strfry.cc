#include <bits/stdc++.h>

using namespace std;

string testcase(string testcase1, string testcase2){
    int n=0;
    int tagA[26] = {};
    int tagB[26] = {};
    while(n<testcase1.length()){
        tagA[(int)testcase1[n]-97]++;
        n++;
    }
    n=0;
    while(n<testcase2.length()){
        tagB[(int)testcase2[n]-97]++;
        n++;
    }
    n=0;
    while(n<26){
        if(tagA[n] != tagB[n]){
            return "Impossible";
        } 
    n++;
    }
    return "Possible";
}


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCaseNum;
    cin >> testCaseNum;

    for (int i = 0; i < testCaseNum; i++)
    {    
        string testCase1, testCase2;
        cin >> testCase1 >> testCase2;
        cout << testcase(testCase1,testCase2) << "\n";
    }
    return 0;
}
