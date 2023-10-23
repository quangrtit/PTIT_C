#include<stdio.h>
#include<math.h>
int thuan_n(int n){
	if(n < 10){
		return 1;
	}
	else{
		int a[10];
		int cn = 0;
		int ii = 0;
		while(n > 0){
			a[ii] = n%10;
			ii++;
			n = n/10;
			cn++;
		}
		for(int i = 0;i<cn/2;i++){
			if(a[i] != a[cn-1-i]){
				return 0;
			}
		}
		return 1;
	}
}
int nguyento(int n){
	if(n < 2){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		for(int i = 2;i <= sqrt(n);i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int check = 0;
		int a,b;scanf("%d %d",&a,&b);
		for(int i = a;i<=b;i++){
			if(nguyento(i) == 1 && thuan_n(i) == 1){
				printf("%d",i);
				printf(" ");
				check ++;
				if(check == 10){
					printf("\n");
					check = 0;
				}
			}
		}
		printf("\n");
		printf("\n");
	}
}
