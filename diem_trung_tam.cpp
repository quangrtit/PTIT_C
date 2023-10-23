#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n-1],b[n-1];
	int ok = 0;
	int check[n+1];
	for(int i= 0;i<=n;i++){
		check[i] = 0;
	}
	for(int i = 0;i<n-1;i++){
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		check[a[i]] ++;
		check[b[i]] ++;
	}
	for(int i = 0;i<n+1;i++){
		if(check[i] >= n-1){
			ok = 1;
			break;
		}
	}
	if(ok == 1){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
