#include<stdio.h>
#include<math.h>
long long check_fibo(int n){
	if( n <= 2 ){
		return 1;
	}
	else{
		long long f1 = 1,f2 = 1,tmp;
		int ii = 2;
		while(ii <= n){
			tmp = f1 + f2;
			f1 = f2;
			f2 = tmp;
			ii ++;
			if(ii == n){
				return tmp;
			}	
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		printf("%lld\n",check_fibo(n));
	}
}
