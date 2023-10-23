#include<stdio.h>
int main(){
	int n,m,k;scanf("%d %d %d",&n,&m,&k);
	if(m == 0){
		printf("%d",n-m);
	}
	else{
		int a[m],check[n+1];
		for(int i = 0;i<=n;i++){
			check[i] = 0;
		}
		for(int i = 0;i <= m;i++){
			scanf("%d",&a[i]);
			check[a[i]] = 1;
		}
	}
}
