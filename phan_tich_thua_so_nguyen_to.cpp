#include<stdio.h>
void solve(){
	long long n;scanf("%lld", &n);
	for(int i = 2;i<=n;i++){
		if(n%i == 0){
			while(n%i == 0){
				printf("%d", i);
				printf(" ");
				n = n/i;
				if(n == 0){
					break;
				}
			}
		}
	}
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		solve();
		printf("\n");
	}
}
