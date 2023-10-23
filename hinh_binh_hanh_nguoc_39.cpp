#include<stdio.h>
int main(){
	int h,c;scanf("%d %d",&h,&c);
	int f = 0;
	int ii = 1;
	int check = c+f;
	while(ii <= h){
		if(f == 0){
			for(int i = 1;i <= check;i++){
				printf("*");
			}
		}
		else{
			for(int i = 1;i<=check;i++){
				if(i <= f){
					printf("~");
				}
				else{
					printf("*");
				}
			}
		}
		printf("\n");
		f++;
		ii++;
		check++;
	}
}
