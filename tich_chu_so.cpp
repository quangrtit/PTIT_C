#include<stdio.h>
int main(){
	int n;scanf("%d", &n);
	long long tmp = 1;
	while(n>0){
		tmp *= n%10;
		n = n / 10;
	}
	printf("%lld", tmp);
}
