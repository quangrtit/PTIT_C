#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n ; i ++) cin>>a[i];
	if(n == 1){
		cout<<0<<endl;
	}
	else{
	
		int cnt = 0;
		for(int i = 1 ; i < n ; i ++){
			if(a[i-1] != a[i]){
				cnt ++;
			}
		}
		cout<<cnt<<endl;
	}
}
