#include<stdio.h>
#include<math.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int cn = 0;
		long long n;scanf("%lld",&n);
		for(int i = 1;i<=sqrt(n);i++){
			if(n%i == 0 && (n/i) % 2 == 0 && i%2 == 0){
				cn += 2;
			}
			else if(n%i == 0 && (n/i) %2 == 0 && i%2 == 1){
				cn += 1;
			}
			else if(n%i == 0 && (n/i) % 2 == 1 && i%2 == 0){
				cn += 1;
			}
		}
		if(sqrt(n) == (int) sqrt(n) && (int)sqrt(n) %2 == 0){
			cn -= 1;
		}
		printf("%d\n",cn);
	}
}
