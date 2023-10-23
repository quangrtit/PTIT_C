#include<stdio.h>
int main(){
	long long a,b;scanf("%lld %lld", &a, &b);
	float x = a*1.0/b;
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f\n",a+b, a-b, a*b, a/b, a%b, x);
}
