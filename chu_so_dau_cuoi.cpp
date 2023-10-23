#include<stdio.h>
int main(){
	long long n;scanf("%lld", &n);
	int two = n%10,one;
	while(n > 0){
		if(n < 10){
			one = n;
		}
		n = n / 10;
	}
	printf("%d %d", one, two);
}
