#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	float xx = 0;
	float tmp = 0;
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		tmp += a[i];
	}
	printf("%.3f",tmp/n);
}
