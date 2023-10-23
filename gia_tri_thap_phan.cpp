#include<stdio.h>
int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%.15f\n", 1.0/n);
	}
}
