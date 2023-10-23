#include<stdio.h>
#include<math.h>
long long check[65];
void sang_fibo(){
	long long f0 = 0,f1 = 1,tmp,ii = 2;
	check[0] = 0;
	check[1] = 1;
	while(ii < 65){
		tmp = f0 + f1;
		f0 = f1;
		f1 = tmp;
		check[ii] = tmp;
		ii ++;
	}
}
int main(){
	//int t;scanf("%d",&t);
	int tt = 1,iii = 0;
	sang_fibo();
	int n;scanf("%d",&n);
	long long a[n][n];
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
	//printf("Test %d:\n",tt);
	for(int i = 0;i<n;i++){
		for(int j = 0;j < n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}	
}
