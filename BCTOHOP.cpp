#include<bits/stdc++.h>
using namespace std;
long long t,a[1005],n,k;
bool b[1005];
void backtracking(int j){
	for(int i = a[j-1] + 1 ; i <= n; i ++){
		a[j] = i;
		if(j == k){
			for(int i = 1; i <= k ; i ++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else{
			backtracking(j + 1);
		}
	}
}
int main(){
	cin>>n>>k;
	a[0] = 0;
	backtracking(1);	
}
