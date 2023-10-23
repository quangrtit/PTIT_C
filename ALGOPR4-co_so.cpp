#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	long long n = s.size();
	stack<long long> v;
	long long tmp = 0;
	for(int i = 0 ; i < n ; i ++){
		tmp += (s[i] - '0') * pow(2,n-1-i);
	}
	while(tmp > 0){
		v.push(tmp%8);
		tmp /= 8;
	}
	if(v.empty()){
		cout<<0;
	}
	else{
		while(!v.empty()){
			cout<<v.top();
			v.pop();
		}
	}
}
