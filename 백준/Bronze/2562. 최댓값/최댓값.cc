#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int result=0;
	int resultNum=0;
	int m;

	for(int i=0;i<9;i++){
		cin >> m;
		if(m>result){
			result = m;
			resultNum = i+1;
		}
	}
	cout << result << "\n" << resultNum ;
}
