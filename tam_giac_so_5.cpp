#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		int ii = 2;
		int cn = 0;
		while(ii <= 2*i){
			printf("%d",ii);
			ii += 2;
			cn ++;
		}
		ii -= 4;
		if(cn < 2*i){
			while(ii >= 1){
				printf("%d",ii);
				ii = ii - 2;
			}
		}
		printf("\n");
	}
}
