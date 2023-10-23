#include<bits/stdc++.h>
using namespace std;
long long f[100001];
void sang(){
	f[0] = 1;
	for(int i = 0;i<=49999;i++){
		f[2*i+1] = f[i];
		f[2*(i+1)] = f[i+1] + f[i];
	}
}
int main(){
	sang();
	
//	int p,q,t;
//	cin>>t;
//	while(t--){
//		cin>>p>>q;
//		for(int i = 0;i<100000;i++){
//			if(f[i] *q == f[i+1]*p){
//				cout<<i<<endl;
//				break;
//			}
//		}
//	}
}
