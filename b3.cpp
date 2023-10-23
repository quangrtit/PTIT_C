#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int a[91] = {0},b[123] = {0};
		for(int i = 0;i<n;i++){
			if(s[i] >= 65 && s[i] <= 90){
				a[s[i]] ++;
			}
			else{
				b[s[i]] ++;
			}
		}
		int cnt = 0;
		int kt = k;
		for(int i = 65;i<=90;i++){
			if(a[i] == b[i+32]){
				cnt += a[i];
			}
			else{
				cnt += min(a[i] , b[i+32]);
				//cnt += abs(a[i] - b[i+32])/2;	
			}
		}
		for(int i = 65;i<=90;i++){
			if(a[i] != b[i+32]){
				if(k >= abs(a[i] - b[i+32])/2){
					cnt += abs(a[i] - b[i+32])/2;
					k -= abs(a[i] - b[i+32])/2;
					if(k == 0){
						break;
					}
				}
				else if(k < abs(a[i] - b[i+32])/2){
					cnt += k;
					k = 0;
					break;
				}
				if(k == 0){
					break;
				}
			}
		}
		cout<<cnt<<endl;
	}
}
