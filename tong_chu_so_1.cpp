#include<stdio.h>
int main(){
	long long n;scanf("%lld", &n);
	long long ok = 0;
//	if(n < 10){
//		print
//	}
	while( n > 0 ){
		ok += n%10;
		n = n / 10;
	}
	printf("%lld", ok);
}
