#include<bits/stdc++.h>
using namespace std;
bool th(string a,string b){
	string k = a + b;
	string k1 = b + a;
	return k > k1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<string> a(n);
		for(int i = 0 ; i < n ;i ++){
			cin>>a[i];
		}
		sort(a.begin(),a.end(),th);
		for(int i = 0 ; i < n ; i ++){
			cout<<a[i];
		}
		cout<<endl;
	}
}
