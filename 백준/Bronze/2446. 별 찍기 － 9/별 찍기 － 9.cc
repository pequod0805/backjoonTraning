#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	n=n*2-1;
	for(int i=n;i>0;i-=2){
		for (int j=0;j<(n-i)/2;j++) cout << " ";
		for (int j=0;j<i;j++) cout << "*";
		cout << "\n";
	}
	for(int i=2;i<=n;i+=2){
		for (int j=1;j<=(n-i)/2;j++) cout << " "; 
		for (int j=0;j<=i;j++) cout << "*";
		cout << "\n";
	}
}
