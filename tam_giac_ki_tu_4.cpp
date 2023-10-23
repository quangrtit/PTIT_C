#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[50][50];
	int tmp = 66;
	a[0][0] = 64;
	for(int i = 1;i<n;i++){
		a[i][0] = 64,a[i][2*i] = 64;
		for(int j = 1;j < (2*i+1)/2;j++){
			a[i][j] = tmp;
			a[i][2*i-j] = a[i][j];
			tmp += 2;
		}
		a[i][(2*i+1)/2] = tmp;
		tmp = 66;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<2*i+1;j++){
			printf("%c",(char)a[i][j]);
		}
		printf("\n");
	}
}
