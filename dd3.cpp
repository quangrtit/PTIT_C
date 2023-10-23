#include<bits/stdc++.h>
using namespace std;
//bool kt(string s1,string s2){
//	for(int i = 0;i<s.size();i++){
//		if(s1[i] != s2[i]){
//			return false;
//		}
//	}
//	return true;
//}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		map<string,int> mp;
		string a[n];
		int ii = 0;
		for(int i = 0;i<n-1;i++){
			string s1 = s;
			s1.erase(i,2);
			a[ii] = s1;
			mp[s1] ++;
			ii++;
		}
//		for(int i = 0;i<ii;i++){
//			cout<<a[i]<<endl;
//		}
		int cnt = 0;
		for(int i = 0;i<ii;i++){
			if(mp[a[i]] > 0){
				cnt ++;
				mp[a[i]] = 0;
			}
		}
		cout<<cnt<<endl;
	}
}
