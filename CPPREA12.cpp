#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >> t;
	while(t-- ){
		int n ; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i ++){
			cin >> a[i];
		}
		long long maxz2 = LLONG_MIN;
		for(int i = 0 ; i < n ; i ++){
			long long cnt = 1,maxz = LLONG_MIN;
			for(int j = i ; j < n ; j ++){
				cnt *= a[j];
				maxz = max(cnt,maxz);
			}
			maxz2 = max(maxz,maxz2);
		}
		cout<<maxz2<<endl;
	}
}
