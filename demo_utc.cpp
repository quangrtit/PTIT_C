#include<bits/stdc++.h>
using namespace std;
#define piz 3.14159
int main(){
	int n,m;cin>>n>>m;
	int a[m];
	for(int i = 0 ; i < m ; i ++){
		cin >> a[i];
	}
	int f1[n+1] = {0};
	f1[0] = 1;
	for(int i = 1 ; i <= n ; i ++){
		for(int j = 0 ; j < m ; j ++){
			if(i >= a[j]){
				f1[i] += f1[i-a[j]] ;
			}
		}
	}
	cout<<f1[n];
}
