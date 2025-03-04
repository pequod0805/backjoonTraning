#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int ans = -1;
	int sum=0;
	for(int i=0;i<7;i++){
		int n;
		cin >> n;
		if(n%2==1){
			sum += n;
			if(ans == -1){ 
				ans = n;
			}
			else if(ans > n){
				ans = n;
			}
		}
	}
	if(sum>0) cout << sum << "\n";
	cout << ans << "\n";
}
