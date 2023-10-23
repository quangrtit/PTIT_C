#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b,c,d;cin>>a>>b>>c>>d;
		int n = d-b;
		int m = a-c + d - b;
		if(m <0 || n < 0){
			cout<<-1<<endl;
		}
		else{
			cout<<abs(m) + abs(n)<<endl;
		}
	}
}
