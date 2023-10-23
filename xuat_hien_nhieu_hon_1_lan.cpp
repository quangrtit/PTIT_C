#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n];
	int check[100000+1];
	int max = -100000;
	for(int i = 0;i<n;i++){
		check[i] = 0;
	}
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		check[a[i]] ++;
		if(max < a[i]){
			max = a[i];
		}
	}
	int kf = 0;
	for(int i = 0;i<n;i++){
		if(check[a[i]] > 1){
			printf("%d",a[i]);
			printf(" ");
			kf= 1;
			check[a[i]] = 0;
		}
	}
	if(kf == 0){
		printf("%d",0);
	}
}
