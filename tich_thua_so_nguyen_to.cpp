#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		long long tmp = 1;
		for(int i = 2;i<=n;i++){
			if(n%i == 0){
				tmp *= i;
				while( n % i == 0){
					n = n / i;
				}
			}
		}
		printf("%d\n",tmp);
	}
}
