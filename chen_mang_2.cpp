#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	int kk = 1;
	while(t--){
		int n,m,x;scanf("%d %d %d",&n,&m,&x);
		int a[n],b[m];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i = 0;i<m;i++){
			scanf("%d",&b[i]);
		}
		printf("Test %d:",kk);
		printf("\n");
		if(x != 0){
			for(int i = 0;i<x;i++){
				printf("%d",a[i]);
				printf(" ");
			}
			for(int i = 0;i<m;i++){
				printf("%d",b[i]);
				printf(" ");
			}
			for(int i = x;i<n;i++){
				printf("%d",a[i]);
				printf(" ");
			}
			
		}
		else{
			for(int i = 0;i<m;i++){
				printf("%d",b[i]);
				printf(" ");
			}
			for(int j = 0;j < n;j++){
				printf("%d",a[j]);
				printf(" ");
			}
		}
		kk++;
		printf("\n");
	}
}
