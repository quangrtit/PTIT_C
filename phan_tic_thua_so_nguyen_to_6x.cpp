#include<stdio.h>
void solve(){
	int n;scanf("%d",&n);
	if( n == 1){
		printf("1 = 2^0/n");
	}
	else{
		printf("%d = ",n);
		for(int i = 2;i<=n;i++){
			int cn = 0;
			if(n%i == 0){				
				while(n%i == 0){
					cn ++;
					n = n/i;
//					if(n == 0){
//						break;
//					}
				}
				if(n > i) printf("%d^%d * ",i,cn);
				else printf("%d^%d",i,cn);
			}
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		solve();
		printf("\n");
	}
}
