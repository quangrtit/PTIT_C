#include<stdio.h>
int gap2(long long n){
	int two = n%10;
	int one;
	while(n > 0){
		if(n < 10){
			one = n;
		}
		n = n / 10;
	}
	if(one == two*2 || two == one * 2){
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
		if(n <= 10){
			printf("NO\n");
		}
		else{
			long long n1 = n;
			int a[20];
			int cn = 0,ii = 0;
			while(n > 0){
				a[ii] = n%10;
				cn ++;
				n = n / 10;
				ii++;
			}
			int check_check = 0;
			for(int i  =1;i<cn/ 2-1;i++){
				if(a[i] != a[cn-1-i]){
					check_check = 1;
					break;
				}
			}
			if(check_check == 1){
				printf("NO\n");
			}
			else{
				if(gap2(n1) == 1){
					printf("YES\n");
				}
				else{
					printf("NO\n");
				}
			}
		}
	}
}
