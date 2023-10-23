#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int cmp(const void *a,const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x < *y) return -1;
	return 1;
}
// qsort(a,n,sizeof(int),cmp);
int gcd(int a,int b){
	if(b == 0) {
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
int main(){
	int t;scanf("%d",&t);
	int tt = 1;
	while(t--){
		int n,m;scanf("%d %d",&n,&m);
		int a[n][m];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j ++){
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("Test %d:\n",tt);
		for(int i = 0 ; i < n;i++){
			for(int j = 0 ; j < m ; j ++){
				for(int i1 = i;i1 < n;i1++){
					for(int j1 = j;j1 < m;j1++){
						if(a[i][j] > a[i1][j1]){
							swap(&a[i][j],&a[i1][j1]);
						}
					}
				}

			}
		}
		for(int i = 0 ; i < n ; i ++){
			for(int j = 0 ; j < m ; j ++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		tt++;
	}
}
