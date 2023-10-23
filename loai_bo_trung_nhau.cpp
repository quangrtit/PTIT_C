#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n];
	int check[100000+1];
	for(int i = 0;i<100000+1;i++){
		check[i] = 0;
	}
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		check[a[i]] ++;
	}
	printf("%d ",a[0]);
	check[a[0]] = 0;
	for(int i = 1;i<n;i++){
		if(check[a[i]] >= 1){
			printf("%d ",a[i]);
			check[a[i]] = 0;
		}
	}
}
