#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int jj = n-1;
	for(int i = 1;i<=n;i++){
		for(int k = jj;k>=1;k--){
			printf("~");
		}
		int ii = 1;
		int cn = 0;
		while(ii <= 2*i-1){
			printf("%d",ii);
			ii += 2;
			cn ++;
		}
		ii -= 4;
		if(cn < 2*i-1){
			while(ii >= 1){
				printf("%d",ii);
				ii = ii - 2;
			}
		}
		jj --;
		printf("\n");
	}
}
