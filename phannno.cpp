#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n],b[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
		b[i] = 0;
	}
	a[n] = INT_MIN;
	int tmp = INT_MAX;
	int ii = n-1 ;
	int cnt = 0;
	while(ii >= 0){
		int check = ii - a[ii];
		if(ii < tmp){
			cnt ++;
		}
		if(check <  tmp){
			tmp = check;
		}
		ii--;
	}
	cout<<cnt<<endl;
}
