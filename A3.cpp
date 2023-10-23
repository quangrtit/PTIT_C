#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
	for(int i = 0;i<s.size();i++){
		if(s[i] >=65 && s[i] <= 90){
			s[i] = char(s[i]+32);
		}
	}
	return s;
}
int main(){
	int t;cin>>t;
	string check = "meow";
	//cin.ignore();
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		s = chuanhoa(s);
		if(s.size() <4 || s[0] != 'm'){
			cout<<"NO\n";
		}
		else{
			vector<char> x(100);
			x[0] = 'm';
			int ii = 1;
			for(int i = 0;i<s.size();i++){
				if(s[i] != x[ii-1]){
					x[ii] = s[i];
					ii ++;
				}
			}
			string s1 = "";
			for(int i = 0;i<ii;i++){
				s1 += x[i];
			}
			//cout<<s1<<endl;
			if(s1 == check){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}
