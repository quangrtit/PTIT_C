#include<stdio.h>
int giaithua(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n*giaithua(n-1);
	}
}
int giaithua1(int n,int k){
	if(k == 0){
		return 1;
	}
	else{
		return giaithua(n) / (giaithua(k)*giaithua(n-k));
	}
}
int main(){
	int n;scanf("%d",&n);
	int a[n][n];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			printf("%d ",giaithua1(i,j));
		}
		printf("\n");
	}
}
