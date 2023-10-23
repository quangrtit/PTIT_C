#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		int tmp = n%10;
		int check = 0;
		while(n>0){
			if((n%10) <= tmp){
				tmp = n%10;
			}
			else{
				check = 1;
				break;
			}
			n = n / 10;
		}
		if(check == 1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	
}
