#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int f1 = 1,f2 = 1,tmp;
	int cn = 0;
	while(1 > 0){
		tmp = f2 + f1;
		f1 = f2;
		f2 = tmp;
		if(tmp == n){
			cn = 1;
			break;
		}
		else if(tmp > n){
			break;
		}
	}
	if( n == 1 || n == 2 || n == 3 || cn == 1){
		printf("1");
	}
	else if(cn == 0){
		printf("0");
	}
}
