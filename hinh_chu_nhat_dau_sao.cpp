#include<stdio.h>
int main(){
	int r,d;scanf("%d %d",&r , &d);
	for(int i = 1;i<= d;i++){
		for(int j = 1;j <= r;j++){
			if(i == 1 || i == d){
				printf("*");
			}
			else{
				if(j == 1 || j == r){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
