#include<stdio.h>
int main(){
	long long t;scanf("%lld", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		int i = 0;
		int one,two = n%10;
		while(n>0){
			if(n < 10){
				one = n;
				break;
			}
			n = n/10;
			i++;
		}
		if(one == two){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
