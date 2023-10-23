//#include<bits/stdc++.h>
//using namespace std;
////long long b[15] = {1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111,11111111111,111111111111,1111111111111,1111111111111};
//int main(){
//	long long n,cnt = 0;
//	cin>>n;
//	string s = to_string(n);int mx = s.size();
//	long long tmp = 0; 
//	for(int i = 0;i<mx;i++){
//		tmp = tmp*10 +1;
//	}
//	while(mx > 0){
//		if(n/tmp >= 1){
//			cnt += mx;
//			n = n%tmp;		
//		}
//		cout<<n<<endl;
//		tmp = tmp / 10;
//		mx--;
//	}
//	cout<<cnt + n<<endl;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		string s;cin>>s;
		int n = s.size();
		for(int i = 0;i<s.size();i++){
			if(s[i] == '0'){
				a--;
			}
			else if(s[i] == '1'){
				b--;
			}
		}
		for(int i = 0;i<s.size()/2;i++){
			if((s[i] == '0' && s[n-1-i] == '?' )|| (s[i] == '?' && s[n-1-i] == '0' )){
				a--;
				s[i] = '0';
				s[n-1-i] = '0';
			}
			else if((s[i] == '1' &&s[n-1-i] == '?') || (s[i] ==  '?' &&s[n-1-i] == '1')){
				b--;
				s[i] = '1';
				s[n-1-i] = '1';
			}
		}
		int cnt = 0;
		for(int i = 0;i<s.size();i++){
			if(s[i] == '?'){
				cnt ++;
			}
		}
		//cout<<a<<" "<<b<<endl;
		int ii = 0;
		while(a >0){
			if(s[ii] == '?'){
				s[ii] = '0';
				s[n-1-ii] = '0';
				a -= 2;
			}
			ii ++;
		}
		int jj = 0;
		while(b > 0){
			if(s[jj] == '?'){
				s[jj] = '1';
				s[n-1-jj] = '1';
				b-=2;
			}
			jj++;
		}
		int tm = 0;
		for(int i = 0;i<s.size();i++){
			if(s[i] == '0'){
				tm ++;
			}
		}
		if(tm == s.size() - tm) cout<<s<<endl;
		else cout<<-1<<endl;
	}
}
