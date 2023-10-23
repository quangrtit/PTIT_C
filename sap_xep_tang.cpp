#include<stdio.h>
void swap(int *x,int *y){
	int tmp;
	tmp = *y;
	*y = *x;
	*x = tmp;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(a[i] > a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
	for(int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
}
