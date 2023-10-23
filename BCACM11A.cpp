#include<bits/stdc++.h>
using namespace std;
//loai 3 = 900;-> sau khi lay loai 2 va 1 thi con k = 900-n-m
//loai 2 = 180;-> sau khi lay loai 1 thi con m = 180-n loai 2
//loai 1 = 145;
bool check(int n){
	string s = to_string(n);
	int size = s.size();
	for(int i = 0 ; i < size ; i ++){
		if(s[i] != s[size - i - 1])  return false;
	}
	return true;
}
bool kt(int n){
	if(check(n) == false) return false;
	int cnt = 0;
	while(n > 0){
		cnt += n%10;
		n = n / 10;
	}
	if(cnt%10 == 0) return true;
	return false; 
}
bool ktkt(int n){
	if(kt(n) == false) return false;
	while(n > 0){
		if(n%10 == 0){
			return false;
		}
		n = n / 10;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		int a[n][n];
		int ix = 1;
		int ii = 0,jj = n-1;
		while(ii <= jj){
			for(int i = ii ; i < jj ; i ++){
				a[ii][i] = ix;
				ix ++;
			}
			for(int i = ii ; i < jj ; i++){
				a[i][jj] = ix;
				ix ++;
			}
			for(int i = jj ; i > ii; i --){
				a[jj][i]  = ix;
				ix ++;
			}
			for(int i = jj ; i > ii ; i --){
				a[i][ii] = ix;
				ix ++;
			}
			ii ++;
			jj --;
		}
		if(n%2 == 1) a[n/2][n/2] = ix;
		cout<<a[x-1][y-1]<<endl;
	}
}
