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
	int ttt = 1;
	while(t--){
		int n;scanf("%d",&n);
		int a[100][100];
		int ck = 1;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				if(j <= i){
					a[i][j] = j+1;
				}
				else{
					a[i][j] = 0;
				}
			}
		}
		int b[100][100];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				b[i][j] = a[j][i];
			}
		}
		printf("Test %d:\n",ttt);
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				printf("%d ",gt(a,b,n,i,j));
			}
			printf("\n");
		}
		ttt ++;
//		for(int i = 0;i<n;i++){
//			for(int j = 0;j<n;j++){
//				printf("%d",a[i][j]);
//			}
//			printf("\n");
//		}
	}
}
