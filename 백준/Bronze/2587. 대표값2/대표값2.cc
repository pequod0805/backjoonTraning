#include <bits/stdc++.h>
using namespace std;

int arr[6];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	sort(arr,arr+5);

	cout << (arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5<< "\n";

	cout << arr[2] << "\n";
}
