#include <bits/stdc++.h>

using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string testCaseA , testCaseB;
    cin >> testCaseA >> testCaseB;
    int tagA[26] = {};
    int tagB[26] = {};
    for(auto c : testCaseA) tagA[c-'a']++;
    for(auto c : testCaseB) tagB[c-'a']++;
    
    int sum = 0;
    for(int i=0;i<26;i++){
        if(tagA[i] != tagB[i]){
            if(tagA[i] > tagB[i]){
                sum = sum + tagA[i]-tagB[i];
            }else{
                sum = sum + tagB[i]-tagA[i];
            }
        }
    }
    cout << sum;
    return 0;
}