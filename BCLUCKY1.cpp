#include<bits/stdc++.h>
using namespace std;
bool kt(long long n){
	while(n > 0){
		if(n%10 != 4 && n% 10 != 7){
			return false;
		}
	}
	return true;
}
int main(){
	long long n;cin>>n;
	if(kt(n)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
