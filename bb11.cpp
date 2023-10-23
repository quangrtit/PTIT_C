#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		
		long long n;cin>>n;
		int a[n];
		for(int i = 0 ; i < n ; i ++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long cnt =1;
		if(a[0] != 1){
			cout<<"NO"<<endl;
		}
		else{
			int check = 0;
			for(int i = 1 ; i < n ; i ++){
				if(a[i] <= cnt){
					cnt += a[i];
					continue;
				}
				else{
					cout<<"NO"<<endl;
					check = 1;
					break;
				}
			}
			if(check == 0){
				cout<<"YES"<<endl;
			}
		}
	}
}
