#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *y;
	*y = *x;
	*x = tmp;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i<n-1;i++){
		int min = i;
		for(int j = i +1;j<n;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(&a[min],&a[i]);
		for(int i = 0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
