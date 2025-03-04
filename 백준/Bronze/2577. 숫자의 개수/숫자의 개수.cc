#include <bits/stdc++.h>
using namespace std;

//#define __DEBUG__

int cnt[10];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c;
	cin >> a >> b >> c;
	int num = a*b*c;
	string nums = to_string(num);
	
#ifdef __DEBUG__
	cout<<"DEBUG\n";
	cout<<num<<" "<<nums<<"\n";
#endif

	for(int i=0;i<nums.length();i++){ 
		cnt[int(nums[i])-int('0')]+=1;
	}
	for(int i=0;i<10;i++) cout << cnt[i] << "\n";
}
