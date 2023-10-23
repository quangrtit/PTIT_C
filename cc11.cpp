#include<bits/stdc++.h>
using namespace std;
char tv(char s){
	if(s == '1'){
		return '0';
	}
	else{
		return '1';
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		vector<char> s1,s2;
		map<char,char> mp2,mp1;
		if(n == 1){
			cout<<"YES"<<endl;
		}
		else{
			int check1 = 1,check2 = 1;
			for(int i = 0 ; i < n ;i ++){
				if(i %2 == 0){
					s2.push_back('0');
					s1.push_back('1');
				}
				else{
					s1.push_back('0');
					s2.push_back('1');
				}
			}
			for(int i = 0 ; i < n ; i ++){
				if(mp2.find(s[i]) != mp2.end()){
					if( mp2[s[i]] != s2[i]){
						check2 = 0;
					}
				}
				else{
					mp2.insert({s[i],s2[i]});
				}
			}
			for(int i = 0 ; i < n ; i ++){
				if(mp1.find(s[i]) != mp1.end()){
					if( mp1[s[i]] != s1[i]){
						check1 = 0;
					}
				}
				else{
					mp1.insert({s[i],s1[i]});
				}
			}
			if(check1 == 1 || check2 == 1){
				cout<<"YES"<<endl;
			}	
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	
}
