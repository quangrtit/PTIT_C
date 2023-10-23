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
	int min = 0,check = 0;
	int check1 = 1;
	for(int i = 0;i<n-1;i++){
		min = i;	
		for(int j = i+1;j < n;j++){
			if(a[j] < a[min]){
				min = j;
				check = 1;
			}
		}
		swap(&a[i],&a[min]);
		if(check != 2){
			printf("Buoc %d: ",check1);
			for(int i = 0;i<n;i++){
				printf("%d ",a[i]);
			}
			printf("\n");
			check = 0;
			check1++;
		}
	}
}
