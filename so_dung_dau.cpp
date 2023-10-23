#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i= 0;i<n;i++){
			scanf("%d",&a[i]);
		}
		if(n == 1){
			printf("%d\n",a[n-1]);
		}
		else{
			int b[n];
			int  ok = 0;
			for(int i = 0;i<n-1;i++){
				int kf = 0;
				for(int j = i+1 ; j < n ; j ++ ){
					if(a[i] <= a[j]){
						kf = 1;
						break;
					}
				}
				if(kf == 0){
					b[ok] = a[i];
					ok ++;
				}
			}
			if(ok == 0){
				printf("%d\n",a[n-1]);
			}
			else{
				b[ok] = a[n-1];
				for(int i = 0;i<=ok;i++){
					printf("%d ",b[i]);
				}
				printf("\n");
			}
		}
	}
}
