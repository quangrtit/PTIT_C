#include<stdio.h>
#include<math.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n,cn = 0;;scanf("%lld",&n);
		for(int i = 2;i<=sqrt(n);i++){
			while(n%i==0){
				cn = i;
				n = n / i;
			}
		}
		if(n != 1){
			cn = n;
		}
		printf("%lld\n",cn);
	}
}
