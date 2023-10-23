#include<stdio.h>
int fibo(long long n){
	if(n == 1 || n == 0){
		return 1;
	}
	long long f1 = 1,f2 = 1,tmp;
	while(1 > 0){
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		if(tmp == n){
			return 1;
		}
		else if(tmp > n){
			return 0;
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		if(fibo(n) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
