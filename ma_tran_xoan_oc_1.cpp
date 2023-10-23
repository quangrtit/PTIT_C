#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n][n];
	int ii = 0;
	int jj = n-1;int tk = 1;
	while(ii <= jj){
		for(int i  =ii;i<jj;i++){
			a[ii][i] = tk;
			tk ++;
		}
		for(int i = ii;i<jj;i++){
			a[i][jj] = tk;
			tk ++;
		}
		for(int i = jj;i > ii;i--){
			a[jj][i] = tk;
			tk ++;
		}
		for(int i = jj;i> ii;i--){
			a[i][ii] = tk;
			tk ++;
		}
		ii ++;
		jj --;
	}
	if(n%2 == 1){
		a[n/2][n/2] = tk;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j < n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
