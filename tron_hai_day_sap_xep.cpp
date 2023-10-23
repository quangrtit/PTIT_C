#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *y;
	*y = *x;
	*x = tmp;
}
int main(){
	int t;scanf("%d",&t);
	int ttt = 1;
	while(t--){
		int n;scanf("%d",&n);
		int a[n],b[n];
		int c[2*n];
		for(int i = 0 ; i < n ; i ++){
			scanf("%d",&a[i]);
		}
		for(int i = 0 ; i < n ; i ++){
			scanf("%d",&b[i]);
		}
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(a[i] > a[j]){
					swap(&a[i],&a[j]);
				}
			}
		}
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(b[i] < b[j]){
					swap(&b[i],&b[j]);
				}
			}
		}
//		for(int i = 0;i<n;i++){
//			printf("%d ",b[i]);
//		}
		int  ii = 0,a1 = 0,b1 = 0;
		int kl = 2*n;
		while(ii < kl){
			if(ii%2 == 0){
				c[ii] = a[a1];
				a1 ++;
			}
			else{
				c[ii] = b[b1];
				b1 ++;
			}
			ii ++;
		}
		printf("Test %d:\n",ttt);
		ttt ++;
		for(int i = 0;i<ii;i++){
			printf("%d ",c[i]);
		}
		printf("\n");
	}
}
