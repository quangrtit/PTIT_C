#include<stdio.h>
int main(){
	int a[3];
	for(int i = 0;i<3;i++){
		scanf("%d",&a[i]);
	}
	long long check = 10000000;
	for(int i =0;i<3;i++){
		if(check > a[i]){
			check = a[i];
		}
	}
	printf("%lld",check);
}
