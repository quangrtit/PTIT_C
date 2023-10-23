#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,x;cin>>n>>x;
	int a[n];
	map<long long,long long> mp;
	long long ok = INT_MAX;
	for(int i = 0 ; i < n ; i ++){
		cin>>a[i];
		mp[a[i]] ++;
	}
	long long kt = 0;
	for(auto &x : mp){
		if(ok >  x.second){
			ok = x.second;
		}
	}
	for(auto &x : mp){
		if(x.second == ok){
			kt  = x.first;
		}
	}
	cout<<n*x - kt*ok<<endl;
}
