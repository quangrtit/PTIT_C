#include<stdio.h>
#include<math.h>
int check(long long n){
	if(n < 2){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		for(int i  = 2;i<= sqrt(n);i++){
			if(n%i  == 0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		if(check(n) == 0){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}
