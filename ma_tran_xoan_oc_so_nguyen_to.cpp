#include<stdio.h>
#include<math.h>
int aa[10000];
void sang(){
	for(int i = 0;i<10000;i++){
		aa[i] = 0;
	}
	for(int i = 2;i<=sqrt(10000-1);i++){
		if(aa[i] == 0){
			for(int j = i*2;j<10000;j+=i){
				aa[j] = 1;
			}
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	int tt = 1,iii = 0;
	sang();
	int check[401];
	for(int i = 2;i<10000;i++){
		if(aa[i] == 0){
			check[iii] = i;
			iii ++;
		}
		if(iii == 400){
			break;
		}
	}
	while(t--){
		int n;scanf("%d",&n);
		int a[n][n];
		int ii = 0;
		int jj = n-1;int tk = 0;
		while(ii <= jj){
			for(int i  =ii;i<jj;i++){
				a[ii][i] = check[tk];
				tk ++;
			}
			for(int i = ii;i<jj;i++){
				a[i][jj] = check[tk];
				tk ++;
			}
			for(int i = jj;i > ii;i--){
				a[jj][i] = check[tk];
				tk ++;
			}
			for(int i = jj;i> ii;i--){
				a[i][ii] = check[tk];
				tk ++;
			}
			ii ++;
			jj --;
		}
		if(n%2 == 1){
			a[n/2][n/2] = check[tk];
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
