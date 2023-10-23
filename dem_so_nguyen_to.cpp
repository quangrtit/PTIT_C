#include<stdio.h>
#include<math.h>
int check(int n){
	if(n < 2){
		return 0;
	}
	else if(n== 2){
		return 1;
	}
	else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
int check_s(int n){
	while(n > 0){
		if(check(n%10) == 0){
			return 0;
		}
		n = n /10;
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a,b;scanf("%d %d",&a,&b);
		int cn = 0;
		for(int i  =a;i<=b;i++){
			if(check(i) == 1 && check_s(i) == 1){
				cn ++;
			}
		}
		printf("%d\n",cn);
	}
}
