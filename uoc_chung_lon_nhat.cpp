#include<stdio.h>
#include<math.h>
int gcd(long long a,long long b){
	if(a == b){
		return a;
	}
	else if(a > b){
		for(int  i = b;i>=1;i--){
			if(a%i == 0 && b% i == 0){
				return i;
			}
		}
	}
	else{
		for(int  i = a;i>=1;i--){
			if(a%i == 0 && b% i == 0){
				return i;
			}
		}
	}
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long a,b;scanf("%lld %lld", &a, &b);
		printf("%lld\n", gcd(a,b));
	}	
}
