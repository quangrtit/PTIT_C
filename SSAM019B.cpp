#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >> t;
	while( t -- ){
		int n ; cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i = 0 ; i < n ; i ++){
			cin >> a[i];
			mp[a[i]] ++;
		}
		int check = 1;
		for(int i = 0 ; i < n ; i ++){
			if(mp[a[i]] > 1){
				cout << a[i] << endl;
				check = 0;
				break;
			} 
		}
		if(check == 1){
			cout << "NO" << endl;
		}
	}
}
