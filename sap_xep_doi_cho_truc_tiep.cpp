#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i =0;i < n;i++){
		scanf("%d",&a[i]);
	}
	int check = 0;
	int check1 = 1;
	for(int i = 0;i<n-1;i++){	
		for(int j = i +1;j<n;j++){
			if(a[i] > a[j]){
				swap(&a[i],&a[j]);
				check = 1;
			}
		}
		if(check  == 1){
			printf("Buoc %d: ",check1);
			for(int i = 0;i<n;i++){
				printf("%d ",a[i]);
			}
			printf("\n");
			check1 ++;
			check = 0;
		}	
	}
}
