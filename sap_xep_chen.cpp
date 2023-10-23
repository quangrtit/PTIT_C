#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *y;
	*y = *x;
	*x = tmp;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t = 0;
	for(int i = 0;i<n;i++){
		for(int i1 = 0;i1<i;i1++){
			for(int j = i1+1;j<=i;j++){
				if(a[i1] > a[j]){
					swap(&a[i1],&a[j]);
				}
			}
		}
		printf("Buoc %d: ",t);
		for(int m = 0;m<=i;m++){
			printf("%d ",a[m]);
		}
		printf("\n");
		t ++;
	}
}
