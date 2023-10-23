#include<stdio.h>
int main(){
	long long c;scanf("%lld", &c);
	float x = (c*1.0*9/5) + 32;
	printf("%.2f", x);
}
