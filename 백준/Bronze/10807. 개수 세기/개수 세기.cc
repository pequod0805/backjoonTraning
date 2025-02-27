#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	cin >> n;
	int arr[n];
	int cnt=0;
	for(int i=0; i<n; i++) cin >> arr[i];
	cin >> m;
	for(int i=0; i<n; i++) if(arr[i]==m) cnt++;

	cout << cnt;
}
	
