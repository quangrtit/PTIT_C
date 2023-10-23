#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int cn = 0;
	while(n>0){
		cn ++;
		n=n/10;
	}
	printf("%d",cn);
}

