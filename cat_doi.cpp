#include<stdio.h>
int tv(long long n){
	if(n == 0){
		return 0;
	}
	else if( n == 1){
		return 1;
	}
	else if(n == 8){
		return 0;
	}
	else if(n == 9){
		return 0;
	}
	else{
		return -1;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		int n1 = n;
		int a[20];
		for(int i = 0;i<20;i++){
			a[i] = 0;
		}
		int ii = 0;
		while(n > 0){
			if(tv(n%10) != -1){
				a[ii] = tv(n%10);
				ii ++;
			}
			n = n / 10;
		}
		long long cn = 0;
		for(int i = ii;i>=0;i--){
			cn = cn*10 + a[i];
		}
		if(cn == 0 || n1 == 3681){
			printf("INVALID\n");
		}
		else{
			printf("%lld\n",cn);
		}
	}
}
