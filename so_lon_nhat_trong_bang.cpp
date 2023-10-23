#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n],b[n];
	long long min1 = 10000000,min2 = 10000000;
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		if(min1 > a[i]){
			min1 = a[i];
		}
		scanf("%d",&b[i]);
		if(min2 > b[i]){
			min2 = b[i];
		}
	}
	printf("%lld",min1*min2);
}
