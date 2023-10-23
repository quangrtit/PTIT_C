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
			if(j == aa-1){
				printf("%d ",a[i][b-1]);
			}
			else if(j == b-1){
				printf("%d ",a[i][aa-1]);
			}
			else{
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
}
