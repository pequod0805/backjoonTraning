#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n=0;
	cin >> n;

	if(n>=90) cout << "A";
	else if(n>=80) cout << "B";
	else if(n>=70) cout << "C";
	else if(n>=60) cout << "D";
	else cout << "F";
}
