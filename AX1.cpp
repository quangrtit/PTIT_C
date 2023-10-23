#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	if(b == 0 ) return a;
	else return gcd(b,a%b);
}
long long gvc(long long a ,long long b){
	return a*b / gcd(a,b);
}
int main(){
	long long a,b;
	while(1){
		cin>>a>>b;
		if(a == 0 && b == 0){
			break;
		}
		cout<<gcd(a,b)<<" "<<a*b/gcd(a,b)<<endl;
	}
}

