#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[21][21];
	int tmp= 65;
	for(int j = 0;j<n;j++){
		for(int i = j;i<n;i++){
			a[i][j] = tmp;
			tmp ++;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			printf("%c ",(char)(a[i][j]));
		}
		printf("\n");
	}
}
