#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	if(n == 1){
		printf("%d",0);
		printf(" ");
	}
	else if( n == 2){
		printf("%d",1);
	}
	else{
		int f1 = 0,f2 = 1,tmp;
		printf("%d %d",0,1);
		printf(" ");
		int cn = 2;
		while(1 > 0 ){
			tmp = f2 + f1;
			f1 = f2;
			f2 = tmp;
			printf("%d",tmp);
			printf(" ");
			cn ++;
			if(cn == n){
				break;
				
			}
			
		}
	
	}
}
