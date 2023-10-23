#include<stdio.h>
int check(long long n){
	int tcs = 0;
	while(n > 0){
		if((n%10)%2 == 0){
			return 0;
		}
		tcs += n%10;
		n = n/10;
	}
	if(tcs % 2 == 1){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		long long n1 = n;
		int a[20];
		int cn = 0,ii = 0;;
		while(n > 0){
			a[ii] = n%10;
			cn ++;
			n = n / 10;
			ii++;
		}
		int check_check = 0;
		for(int i  =0;i<cn/ 2;i++){
			if(a[i] != a[cn-1-i]){
				check_check = 1;
				break;
			}
		}
		if(check_check == 1){
			printf("NO\n");
		}
		else{
			if(check(n1) == 1){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
}
