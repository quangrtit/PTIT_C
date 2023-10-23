++#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *y;
	*y = *x;
	*x = tmp;
}
int main(){
	int m;scanf("%d",&m);
	int a[m][m];
	for(int i = 0;i<m;i++){
		for(int j = 0 ;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int ii = 0,jj = m-1;
	while(ii < m){
		swap(&a[ii][ii],&a[ii][jj]);
		ii ++;
		jj --;
	}
	for(int i = 0;i<m;i++){
		for(int j = 0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
