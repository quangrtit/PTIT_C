#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n,m,i;scanf("%d %d %d",&n,&m,&i);
		int a[n][m];
		for(int ii = 0;ii<n;ii++){
			for(int jj = 0;jj<m;jj++){
				scanf("%d",&a[ii][jj]);
			}
		}
		for(int ii = 0;ii<n-1;ii++){
			for(int jj = ii+1;jj <n;jj++){
				if(a[ii][i-1] > a[jj][i-1]){
					swap(&a[ii][i-1],&a[jj][i-1]);
				}
			}
		}
		for(int ii = 0;ii<n;ii++){
			for(int jj = 0;jj<m;jj++){
				printf("%d ",a[ii][jj]);
			}
			printf("\n");
		}
	}
}

