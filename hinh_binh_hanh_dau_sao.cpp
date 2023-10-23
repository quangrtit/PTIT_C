#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int f = n-1;
	int n1 = n;
	int tmp = 2*n1-1;
	while(n--){
		for(int i = 1;i<= tmp;i++){
			if(i<=f){
				printf("~");
			}
			else{
				printf("*");
			}
		}
		tmp --;
		f--;
		printf("\n");
	}
}
