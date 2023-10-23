#include<stdio.h>

int main(){
	int t;scanf("%d",&t);
	int tt = 1;
	while(t--){
		int n;scanf("%d",&n);
		int a[n][n];
		int ii = 0;
		int jj = n-1;int tk = n*n;
		while(ii <= jj){
			for(int i  =ii;i<jj;i++){
				a[ii][i] = tk;
				tk --;
			}
			for(int i = ii;i<jj;i++){
				a[i][jj] = tk;
				tk --;
			}
			for(int i = jj;i > ii;i--){
				a[jj][i] = tk;
				tk --;
			}
			for(int i = jj;i> ii;i--){
				a[i][ii] = tk;
				tk --;
			}
			ii ++;
			jj --;
		}
		if(n%2 == 1){
			a[n/2][n/2]= tk;
		}
		printf("Test %d:\n",tt);
		for(int i = 0;i<n;i++){
			for(int j = 0;j < n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		tt++;
	}	
}
