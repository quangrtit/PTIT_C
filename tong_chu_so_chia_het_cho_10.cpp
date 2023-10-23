#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		int cn = 0;
		while(n>0){
			cn += n%10;
			n = n/10;
		}
		if(cn%10 == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
