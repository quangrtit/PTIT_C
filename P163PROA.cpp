#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	if(s[0] == '0'){
		cout<<0<<endl;
	}
	else{	
		long long cnt = 1;
		long long size = s.size();
		long long number = 0;
		long long qson = 0;
		map<char,int> mp;
		int ii = 0;
		for(int i = 0 ; i < size ; i ++){
			if(s[i] == '?'){
				qson ++;
				ii ++;
			}
			else if(s[i] >= 65 && s[i] <= 74){
				mp[s[i]] ++;
			}
		}
		long long ok_size = mp.size();
		long long ktu = 1;
		for(int i = 0 ; i < ok_size ; i ++){
			ktu *= (10-i);
		}
		if(s[0] >= 65 && s[0] <= 74){
			ktu /= 10;
			ktu *= 9;
		}
		if(s[0] == '?'){
			qson --;
			ktu *= 9;
		}
		string s1 = to_string(ktu);
		cout<<s1;
		for(int i = 1 ; i <= qson ; i ++){
			cout<<0;
		}
	}
}
