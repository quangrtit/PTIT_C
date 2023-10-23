#include<stdio.h>
int kt(int n){
	int tmp = n%10-1;
	while(n > 0){
		if(n%10 <= tmp){
			return 0;
		}
		tmp = n%10;
		n = n / 10;
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a,b;scanf("%d %d",&a,&b);
		int cn = 0;
		for(int i = a;i<=b;i++){
			if(kt(i) == 1){
				cn++;
			}
		}
		printf("%d\n",cn);
	}
}
