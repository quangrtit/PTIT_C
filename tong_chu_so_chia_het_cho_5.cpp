#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2){
		return 0;
	}
	else if(n == 2){
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
int tcs(int n){
	int tmp = 0;
	while(n > 0){
		tmp += n%10;
		n = n / 10;
	}
	if(tmp % 5 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;scanf("%d",&n);
	int cn = 0;
	for(int i = 5;i<=n-1;i++){
		if(nt(i) == 1 && tcs(i) == 1){
			printf("%d ",i);
			cn ++;
		}
	}
	printf("\n");
	printf("%d",cn);
}
