#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >> t;
	while(t -- ){
		int n , k ; cin >> n >> k;
		vector<int> a(k);
		for(int i = 0 ; i < k ; i ++){
			cin >> a[i];
		}
		int tmp = n;
		int vtri = -1;
		for(int i = k - 1; i >= 0 ; i -- ){
			if(a[i] == tmp){
				tmp --;
				continue;
			}
			else{
				tmp --;
				vtri = i;
				break;
			}
		}
//		cout << vtri << endl;
		if(vtri == -1){
			cout << k <<endl;
		}
		else{
			vector<int> demo(a.begin(),a.begin() + k);
			int check = a[vtri] + 1;
			for(int i = vtri ; i < k ; i ++){
				demo[i] = check;
				check ++;
			}
			int cnt = 0;
			map<int,int> mp;
			for(int i = 0 ; i < k ; i ++){
				mp[demo[i]] ++;
			}
			for(int i = 0 ; i < k ; i ++){
				if(mp[a[i]] == 0) cnt ++;
			}
			cout << cnt << endl;
		}
	}
	
}
