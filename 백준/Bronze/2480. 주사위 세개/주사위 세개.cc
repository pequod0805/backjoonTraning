#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c;
	cin >> a >> b >> c;

		if (b==c&&c==a) cout << 10000+c*1000;
		else if (a==b||b==c) cout << 1000+b*100;
		else if (a==c) cout << 1000+a*100;
		else cout << max({a,b,c})*100;
}
