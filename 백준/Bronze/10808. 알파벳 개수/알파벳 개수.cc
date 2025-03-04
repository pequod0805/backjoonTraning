#include <bits/stdc++.h>
using namespace std;

int answer[26];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		answer[int(s[i])-97]++;
	}
	for(int i=0;i<26;i++){
		cout << answer[i] << " ";
	}
}
