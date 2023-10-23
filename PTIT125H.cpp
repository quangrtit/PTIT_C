#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	string s;cin>>s;
	vector<char> ok;
	ok.push_back('*');
	for(int i = 0 ; i < n ; i ++){
		if(s[i] == 'S'){
			ok.push_back('S');
			ok.push_back('*');
		}
		else{
			if(ok[ok.size() - 1] == 'L'){
				ok.push_back('L');
				ok.push_back('*');
			}
			else{
				ok.push_back('L');
			}
		}
	}
	if(ok[ok.size() - 1] != '*'){
		ok.push_back('*');
	}
	int cnt = 0;
	for(int i = 0 ; i < ok.size() ; i ++){
		if(ok[i] == '*') cnt ++;
	}
	cout<<cnt;
}
