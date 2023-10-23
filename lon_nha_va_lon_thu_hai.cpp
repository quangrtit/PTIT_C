#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n];
	int check_max1 = -100000;
	int check_max2 = check_max1 - 1;
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		if(check_max1 < a[i]){
			check_max1 = a[i];
		}
	}
	for(int i = 0;i<n;i++){
		if(a[i] == check_max1){
			a[i] = check_max2 - 100;
		}
	}
	for(int i = 0;i<n;i++){
		if(check_max2 < a[i]){
			check_max2 = a[i];
		}
	}
	printf("%d %d",check_max1,check_max2);
}
