#include<stdio.h>
int main(){
	int m,n;scanf("%d %d",&m,&n);
	int a[m][n];
	for(int i= 0;i<m;i++){
		for(int j = 0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int aa,b;scanf("%d %d",&aa,&b);
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			if(i == aa-1){
				printf("%d ",a[b-1][j]);
			}
			else if(i == b-1){
				printf("%d ",a[aa-1][j]);
			}
			else{
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
}
