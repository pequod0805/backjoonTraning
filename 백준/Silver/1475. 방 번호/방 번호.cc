#include <bits/stdc++.h>

using namespace std;
int setpacks[10];
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string testCase;
    cin >> testCase;
    for(auto c : testCase) setpacks[c-'0']++ ;
    
    int n = 10;
    int sum = 0;
    int maxvalue = 0;
    int maxvalue69 = 0;
    int sumvalue69 = 0;

    while(n--){
        if(n==9 || n==6){
            sumvalue69 = sumvalue69 + setpacks[n];
        //    cout << "sumvalue69 : " << sumvalue69;
        //    cout << ", setpacks[n] : " << setpacks[n] <<"\n";
        }else if(setpacks[n] > maxvalue){
            maxvalue = setpacks[n];
        //    cout << "maxvalue : " << maxvalue;
        //    cout << ", setpacks[n] : " << setpacks[n] <<"\n";
        }
    }
    if(sumvalue69%2 == 1){
        maxvalue69 = sumvalue69/2 + 1;
    }
    else{
        maxvalue69 = sumvalue69/2;
    }
    if(maxvalue69 > maxvalue){
        maxvalue = maxvalue69;
    }
    cout << maxvalue;
    return 0;
}
