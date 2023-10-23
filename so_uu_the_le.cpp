#include<stdio.h>
int check(long long n){
	int sl = 0;
	int odd = 0;
	while(n > 0){
		if((n%10)%2 == 1){
			odd ++;
		}
		sl ++;
		n = n / 10;		
	}
	if(sl-odd >= odd){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		if(check(n) == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
