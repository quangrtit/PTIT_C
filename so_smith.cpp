#include<stdio.h>
int tcs(int n){
	if(n < 10){
		return n;
	}
	else{
		int t = 0;
		while(n > 0){
			t += n%10;
			n = n / 10;
		}
		return t;
	}
}
int main(){
	int n;scanf("%d",&n);
	int n1 = n;
	if(n <= 1){
		printf("NO\n");
	}
	else{
		int cn = 0;
		for(int i = 2;i<=n;i++){
			if(n%i == 0){
				while(n%i == 0){
					cn += tcs(i);
					n = n/i;	
				}
			}
		}
		if(cn == tcs(n1)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
