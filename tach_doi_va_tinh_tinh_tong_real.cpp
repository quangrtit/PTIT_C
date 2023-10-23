#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char aa[201];
	scanf("%s",aa);
	int a[300];
	for(int i = 0 ;i < strlen(aa);i++){
		a[i] = aa[i] - '0';
	}
	int n = strlen(aa);
	int b[300],c[300];
	while(n > 1){
		if(n % 2 == 0){
			for(int i = 0 ; i < n /2;i++){
				b[i] = a[i];
			}
			int ii = 0;
			for(int i = n/2;i< n;i++){
				c[ii] = a[i];
				ii ++;
			}
			int tmp = 0;
			for(int i = n/2-1;i>=0;i--){
				if(b[i] + c[i] + tmp <= 9){
					a[i] = b[i] + c[i] + tmp;
					tmp = 0;
				}
				else{
					a[i] = b[i] + c[i] + tmp - 10;
					tmp = 1;
				}
			}
			if(tmp == 1){
				for(int i = n/2;i >= 1;i--){
					a[i] = a[i-1];
				}
				a[0] = 1;
				for(int i = 0 ; i <= n/2;i++){
					printf("%d",a[i]);
				}
				printf("\n");
				n = n /2 +1;
			}
			else{
				for(int i = 0 ; i < n /2; i ++ ){
					printf("%d",a[i]);
				}
				printf("\n");
				n = n / 2;
			}
			
		}
		else{
			b[0] = 0;
			for(int i = 0 ; i < n /2;i++){
				b[i+1] = a[i];
			}
			int ii = 0;
			for(int i = n/2;i < n ; i ++){
				c[ii] = a[i];
				ii++;
			}
			int tmp = 0;
			int n1 = n/2 + 1;
			for(int i = n1-1;i>=0;i--){
				if(b[i] + c[i] + tmp <= 9){
					a[i] = b[i] + c[i] + tmp;
					tmp = 0;
				}
				else{
					a[i] = b[i] + c[i] + tmp -10;
					tmp = 1;
				}
			}
			if(tmp == 1){
				for(int i = n1;i>=1;i--){
					a[i] = a[i-1];
				}
				a[0] = 1;
				for(int i = 0 ; i < n1+1;i++){
					printf("%d",a[i]);
				}
				printf("\n");
				n = n1 +1;
			}
			else{
				for(int i = 0 ;i<n1;i++){
					printf("%d",a[i]);
				}
				printf("\n");
				n = n1;
			}
		}
	}
}
