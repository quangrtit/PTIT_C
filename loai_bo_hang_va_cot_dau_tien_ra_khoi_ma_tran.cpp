#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	int kk = 1;
	while(t--){
		int n,m;scanf("%d %d",&n,&m);
		int a[n][m];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				scanf("%d",&a[i][j]);
				if(i == 0 || j == 0){
					a[i][j] = -1;
				}
			}
		}
		printf("Test %d:\n",kk);
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				if(a[i][j] != -1){
					printf("%d ",a[i][j]);
				}
			}
			printf("\n");
		}
		kk++;
	}
}
