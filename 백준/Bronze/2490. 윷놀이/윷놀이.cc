#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	for(int i=0;i<3;i++){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int num = a+b+c+d;
		if(num==0) cout << "D\n";
		else if (num==1) cout << "C\n";
		else if (num==2) cout << "B\n";
		else if (num==3) cout << "A\n";
		else cout << "E\n";
	}
}
