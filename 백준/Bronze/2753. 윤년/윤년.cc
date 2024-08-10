#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int y;
	cin >> y;
	bool ans = false;
	if(y % 4==0) ans = true;
	if(y % 100==0) ans = false;
	if(y % 400==0) ans = true;

	if(ans) cout << "1";
	else cout << "0";
}
