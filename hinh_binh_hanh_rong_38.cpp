#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int f = n-1;
	int n1 = n;
	int tmp = 2*n1-1;
	int cn = 1;
	while(n--){
		for(int i = 1;i<= tmp;i++){
			if(i<=f){
				printf("~");
			}
			else{
				if(cn == 1 || cn == n1){
					printf("*");
				}
				else{
					if(i == f+1 || i == tmp){
						printf("*");
					}
					else{
						printf(".");
					}
				}
			}
		}
		tmp --;
		f--;
		cn++;
		printf("\n");
	}
}
//					if(i == f+1 || i == tmp){
//					printf("*");
//				}
//				else{
//					printf(".");
//				}
