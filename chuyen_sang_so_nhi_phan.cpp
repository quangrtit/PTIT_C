#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	if(n == 0){
		printf("%d",0);
	}
	else{
		int a[100000+1];
		int  ii = 0;
		while(n > 0){
			a[ii] = n%2;
			n = n / 2;
			ii ++;
		}
		for(int i = ii-1;i>=0;i--){
			printf("%d",a[i]);
		}
	}
}
