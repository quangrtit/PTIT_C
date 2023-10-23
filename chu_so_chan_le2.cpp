#include<stdio.h>
void solve(){
	long long n;scanf("%lld", &n);
	int odd = 0,sime = 0;
	while(n > 0){
		if((n%10)%2 == 0){
			sime ++;
		}
		else{
			odd ++;
		}
		n = n /10;
	}
	printf("%d %d", odd, sime);
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		solve();
		printf("\n");
	}
}
