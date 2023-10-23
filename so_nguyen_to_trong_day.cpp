#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2){
		return 0;
	}
	else if( n == 2){
		return 1;
	}
	else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i == 0){
				return  0;
			}
		}
		return 1;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i = 0;i<n;i++){
			if(nt(a[i]) == 1){
				printf("%d",a[i]);
				printf(" ");
			}
		}
		printf("\n");
	}
}
