#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int mk = 1;
	for(int i = 1;i<=n;++i){
		if(i%2 == 1){
			for(int j = mk;j< mk+i;j++){
				printf("%d ",j);
			}
			mk = mk+i;
		}
		else{
			for(int j = mk+i-1;j >= mk;j--){
				printf("%d ",j);
			}
			mk = mk + i;
		}
		printf("\n");
	}
}
