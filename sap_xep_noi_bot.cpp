#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ii = 1,kt = 0;
	for(int i = 0;i<n-1;i++){
		int check = 0;
		for(int j = 0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				swap(&a[j],&a[j+1]);
				check = 1;
			}
		}
		if(check == 1){
			printf("Buoc %d: ",ii);
			for(int i = 0;i<n;i++){
				printf("%d ",a[i]);
			}
			printf("\n");
			ii++;
		}
	}
}
