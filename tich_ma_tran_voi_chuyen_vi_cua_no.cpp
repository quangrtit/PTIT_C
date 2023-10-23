#include<stdio.h>
int gt(int a[100][100],int b[100][100],int m, int x,int y){
	int tt = 0;
	for(int i = 0;i<m;i++){
		tt += a[x][i] * b[i][y];
	}
	return tt;
}
int main(){
	int t;scanf("%d",&t);
	int tt = 1;
	while(t--){
		int n,m;scanf("%d %d",&n,&m);
		int a[100][100],at[100][100];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				scanf("%d",&a[i][j]);
				at[j][i] = a[i][j];
			}
		}
//		for(int i = 0;i<m;i++){
//			for(int j = 0;j<n;j++){
//				printf("%d ",at[i][j]);
//			}
//			printf("\n");
//		}
		// tinh tich ma tran
		printf("Test %d:\n",tt);
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				printf("%d ",gt(a,at,m,i,j));
			}
			printf("\n");
		}
		tt ++;
	}
}
