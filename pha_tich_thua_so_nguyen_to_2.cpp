#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	for(int i = 2;i <= n;i++){
		if(n%i == 0){
			while(n%i == 0){
				if(n > i){
					printf("%dx",i);
				}
				else{
					printf("%d",i);
				}
				n = n / i;
			}
		}
	}
}
