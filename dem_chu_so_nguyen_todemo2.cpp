#include<stdio.h>
#include<math.h>
int nt(long long n){
	if( n < 2){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	long long n;scanf("%lld",&n);
	int a[11];
	for(int i = 0;i<11;i++){
		a[i] = 0;
	}
	int check[10];
	int  ii = 0;
	while(n > 0){
		if(nt(n%10) == 1){
			a[n%10] ++;
			check[ii] = n%10;
			ii ++;
		}
		n = n / 10;
	}
	for(int i = ii-1;i>=0;i--){
		if(a[check[ii]] >0){
			printf("%d %d/n",check[ii],a[check[ii]]);
		}
	}
}
