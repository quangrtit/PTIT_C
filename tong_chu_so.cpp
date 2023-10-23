#include<stdio.h>
int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		long long ok = 0;
		if(n >= 0){
			while( n > 0 ){
				ok += n%10;
				n = n / 10;
			}
			printf("%lld\n", ok);	
		}
		else{
			n = (-1) * n;
			while( n > 0 ){
				ok += n%10;
				n = n / 10;
			}
			printf("%lld\n", ok);	
		}
	}
}
