#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int tt = 1;
	while(t--){
		cout<<"Case "<<tt<<": ";
		long long n;cin>>n;
		long long tmp = n*(n+1)/2;
		if(tmp %2 == 1) cout<<1<<endl;
		else cout<<0<<endl;
		tt++;
	}
}
