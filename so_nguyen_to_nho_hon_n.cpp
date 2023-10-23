#include<stdio.h>
void solve(){
	int n;scanf("%d",&n);
	int a[n+1];
	for(int i = 0;i<=n;i++){
		a[i] = 0;
	}
	for(int i = 2;i <= n;i++){
		if(a[i] == 0){
			for(int j = 2;j<=n/i;j++){
				a[j*i] = 1;
			}
		}
	}
	for(int i = 2;i<n;i++){
		if(a[i] == 0){
			printf("%d\n",i);
		}
	}
}
int main(){
	solve();
}
