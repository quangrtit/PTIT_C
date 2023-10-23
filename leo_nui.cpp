#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n],b[n];
	long long len = 0,xuong = 0;
	int min_len = 100000,min_xuong = 100000;
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		len += a[i];
		scanf("%d",&b[i]);
		xuong += b[i];
	}
	if(xuong > len){
		for(int i = 0;i<n;i++){
			if(min_len > a[i]){
				min_len = a[i];
			}
		}
		printf("%d",xuong + min_len);
	}
	else{
		for(int i = 0;i<n;i++){
			if(min_xuong > b[i]){
				min_xuong = b[i];
			}
		}
		printf("%d",len + min_xuong);
	}
}
